/* ScummVM - Scumm Interpreter
 * Copyright (C) 2005-2006 Neil Millstone
 * Copyright (C) 2006 The ScummVM project
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 */
 
#include "stdafx.h"
#define CHARSET_MASK_TRANSPARENCY 253

namespace DS {

void asmDrawStripToScreen(int height, int width, byte const* text, byte const* src, byte* dst, 
	int vsPitch, int vmScreenWidth, int textSurfacePitch) {


	if (height <= 0) height = 1;
	if (width < 4) return;
	
	
	width &= ~4;
//	src = (const byte *) (((int) (src)) & (~4));
//	dst = (byte *) (((int) (dst)) & (~4));
//	text = (const byte *) (((int) (text)) & (~4));
	
	asm (	"mov r5, %0\n"				// Height
			"yLoop:\n"			
			"mov r3, #0\n"				// X pos
			
			"xLoop:\n"
			
			"ldr r4, [%2, r3]\n"		// Load text layer word
			"cmp r4, %5\n"
			"bne singleByteCompare\n"
			"ldr r4, [%3, r3]\n"
			"str r4, [%4, r3]\n"
			"add r3, r3, #4\n"
			"cmp r3, %1\n"				// x == width?
			"blt xLoop\n"
			
			"add %2, %2, %8\n"			// src += vs->pitch
			"add %3, %3, %6\n"			// dst += _vm->_screenWidth
			"add %4, %4, %7\n"			// text += _textSurface.pitch
			"sub r5, r5, #1\n"			// y -= 1
			"cmp r5, #0\n"				// y == 0?
			"bne yLoop\n"
			"b end\n"
			
			
			"singleByteCompare:\n"
			"ldrb r4, [%2, r3]\n"		// Load text byte
			"cmps r4, %5, lsr #24\n"	// Compare with mask
			"strneb r4, [%4, r3]\n"		// Store if not equal
			"ldreqb r4, [%3, r3]\n"		// Otherwise Load src byte
			"streqb r4, [%4, r3]\n"		// Store it
			"add r3, r3, #1\n"

			"ldrb r4, [%2, r3]\n"		// Load text byte
			"cmps r4, %5, lsr #24\n"	// Compare with mask
			"strneb r4, [%4, r3]\n"		// Store if not equal
			"ldreqb r4, [%3, r3]\n"		// Otherwise Load src byte
			"streqb r4, [%4, r3]\n"		// Store it
			"add r3, r3, #1\n"
			
			"ldrb r4, [%2, r3]\n"		// Load text byte
			"cmps r4, %5, lsr #24\n"	// Compare with mask
			"strneb r4, [%4, r3]\n"		// Store if not equal
			"ldreqb r4, [%3, r3]\n"		// Otherwise Load src byte
			"streqb r4, [%4, r3]\n"		// Store it
			"add r3, r3, #1\n"

			"ldrb r4, [%2, r3]\n"		// Load text byte
			"cmps r4, %5, lsr #24\n"	// Compare with mask
			"strneb r4, [%4, r3]\n"		// Store if not equal
			"ldreqb r4, [%3, r3]\n"		// Otherwise Load src byte
			"streqb r4, [%4, r3]\n"		// Store it
			"add r3, r3, #1\n"			

			"cmps r3, %1\n"				// x == width?
			"blt xLoop\n"				// Repeat
			"add %2, %2, %8\n"			// src += vs->pitch
			"add %3, %3, %6\n"			// dst += _vm->_screenWidth
			"add %4, %4, %7\n"			// text += _textSurface.pitch
			"sub r5, r5, #1\n"			// y -= 1
			"cmp r5, #0\n"				// y == 0?
			"bne yLoop\n"
			
			"end:\n"
		: /* no output registers */
		: "r" (height), "r" (width), "r" (text), "r" (src), "r" (dst), "r" (CHARSET_MASK_TRANSPARENCY | (CHARSET_MASK_TRANSPARENCY << 8) | (CHARSET_MASK_TRANSPARENCY << 16) | (CHARSET_MASK_TRANSPARENCY << 24)), 
			"r" (vsPitch), "r" (vmScreenWidth), "r" (textSurfacePitch)
		: "r5", "r3", "r4", "%2", "%3", "%4", "memory");
}



void asmCopy8Col(byte* dst, int dstPitch, const byte* src, int height) {
	asm("ands r0, %3, #1\n"
		 "addne %3, %3, #1\n"
		 "bne roll2\n"
			
		 "yLoop2:\n"
		 "ldr r0, [%2, #0]\n"
		 "str r0, [%0, #0]\n"
		 "ldr r0, [%2, #4]\n"
		 "str r0, [%0, #4]\n"
		 "add %0, %0, %1\n"
		 "add %2, %2, %1\n"
		 "roll2:\n"
		 "ldr r0, [%2, #0]\n"
		 "str r0, [%0, #0]\n"
		 "ldr r0, [%2, #4]\n"
		 "str r0, [%0, #4]\n"
		 "add %0, %0, %1\n"
		 "add %2, %2, %1\n"
		 "subs %3, %3, #2\n"
		 "bne yLoop2\n"		 

		: /* no output registers */
		: "r" (dst), "r" (dstPitch), "r" (src), "r" (height)
		: "r0", "%0", "%2", "%3");
}


static inline void RescaleBlock_5x1555_To_4x1555( u16 s0, u16 s1, u16 s2, u16 s3, u16 s4,
                                                  u16* dest)
{
    u16 rs0 = s0 & 0x1F;
    u16 rs1 = s1 & 0x1F;
    u16 rs2 = s2 & 0x1F;
    u16 rs3 = s3 & 0x1F;
    u16 rs4 = s4 & 0x1F;
    
    u16 gs0 = (s0 >> 5) & 0x1F;
    u16 gs1 = (s1 >> 5) & 0x1F;
    u16 gs2 = (s2 >> 5) & 0x1F;
    u16 gs3 = (s3 >> 5) & 0x1F;
    u16 gs4 = (s4 >> 5) & 0x1F;
    
    u16 bs0 = (s0 >> 10) & 0x1F;
    u16 bs1 = (s1 >> 10) & 0x1F;
    u16 bs2 = (s2 >> 10) & 0x1F;
    u16 bs3 = (s3 >> 10) & 0x1F;
    u16 bs4 = (s4 >> 10) & 0x1F;
    
    u16 rd0 = 4*rs0 +   rs1;
    u16 rd1 = 3*rs1 + 2*rs2;
    u16 rd2 = 2*rs2 + 3*rs3;
    u16 rd3 =   rs3 + 4*rs4;
    
    u16 gd0 = 4*gs0 +   gs1;
    u16 gd1 = 3*gs1 + 2*gs2;
    u16 gd2 = 2*gs2 + 3*gs3;
    u16 gd3 =   gs3 + 4*gs4;
    
    u16 bd0 = 4*bs0 +   bs1;
    u16 bd1 = 3*bs1 + 2*bs2;
    u16 bd2 = 2*bs2 + 3*bs3;
    u16 bd3 =   bs3 + 4*bs4;
    
    // Offsetting for correct rounding
    rd0 = rd0*2+5; rd1 = rd1*2+5; rd2 = rd2*2+5; rd3 = rd3*2+5;
    gd0 = gd0*2+5; gd1 = gd1*2+5; gd2 = gd2*2+5; gd3 = gd3*2+5;
    bd0 = bd0*2+5; bd1 = bd1*2+5; bd2 = bd2*2+5; bd3 = bd3*2+5;
    
    rd0 /= 10; rd1 /= 10; rd2 /= 10; rd3 /= 10;
    gd0 /= 10; gd1 /= 10; gd2 /= 10; gd3 /= 10;
    bd0 /= 10; bd1 /= 10; bd2 /= 10; bd3 /= 10;
    
    u16 d0 = 0x8000 | (bd0 << 10) | (gd0 << 5) | rd0;
    u16 d1 = 0x8000 | (bd1 << 10) | (gd1 << 5) | rd1;
    u16 d2 = 0x8000 | (bd2 << 10) | (gd2 << 5) | rd2;
    u16 d3 = 0x8000 | (bd3 << 10) | (gd3 << 5) | rd3;
    
    dest[0] = d0;
    dest[1] = d1;
    dest[2] = d2;
    dest[3] = d3;
}

// Can't work in place
void Rescale_320xPAL8Scanline_To_256x1555Scanline(u16* dest, const u8* src, const u16* palette)
{
   for(size_t i=0; i<64; ++i)
   {
       u16 s0 = palette[src[5*i+0]];
       u16 s1 = palette[src[5*i+1]];
       u16 s2 = palette[src[5*i+2]];
       u16 s3 = palette[src[5*i+3]];
       u16 s4 = palette[src[5*i+4]];

       RescaleBlock_5x1555_To_4x1555(s0, s1, s2, s3, s4, dest+4*i);
   }
}


// Can work in place, because it's a contraction
void Rescale_320x1555Scanline_To_256x1555Scanline(u16* dest, const u16* src)
{
   for(size_t i=0; i<64; ++i)
   {
       u16 s0 = src[5*i+0];
       u16 s1 = src[5*i+1];
       u16 s2 = src[5*i+2];
       u16 s3 = src[5*i+3];
       u16 s4 = src[5*i+4];

       RescaleBlock_5x1555_To_4x1555(s0, s1, s2, s3, s4, dest+4*i);
   }
}

void Rescale_320x256xPAL8_To_256x256x1555(u16* dest, const u8* src, const u16* palette, int destStride, int srcStride)
{
	for(size_t i=0; i<200; ++i)
	{
		Rescale_320xPAL8Scanline_To_256x1555Scanline(dest + i*destStride, src + i *srcStride, palette);			
	}
}

void Rescale_320x256x1555_To_256x256x1555(u16* dest, const u16* src, int destStride, int srcStride)
{
	for(size_t i=0; i<200; ++i)
	{
		Rescale_320x1555Scanline_To_256x1555Scanline(dest + i*destStride, src + i *srcStride);
	}
}

}
