#include <PalmOS.h>
#include "b_globals.h"

typedef unsigned char byte;

static void addCharset_germanCharsetDataV2() {
	byte germanCharsetDataV2[] = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x01, 0x03, 0x06, 0x0c, 0x18, 0x3e, 0x03, 0x00, 
		0x80, 0xc0, 0x60, 0x30, 0x18, 0x7c, 0xc0, 0x00, 
		0x00, 0x03, 0x3e, 0x18, 0x0c, 0x06, 0x03, 0x01, 
		0x00, 0xc0, 0x7c, 0x18, 0x30, 0x60, 0xc0, 0x80, 
		0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
		0x03, 0x03, 0x03, 0x07, 0x07, 0x0f, 0x1f, 0x7f, 
		0xe0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 
		0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 
		0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x0c, 0x18, 
		0x00, 0x00, 0x00, 0x80, 0xc0, 0x60, 0x30, 0x18, 
		0x18, 0x30, 0x60, 0xc0, 0x80, 0x00, 0x00, 0x00, 
		0x18, 0x0c, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x1f, 0x1f, 0x18, 0x18, 0x18, 
		0x00, 0x00, 0x00, 0xf8, 0xf8, 0x18, 0x18, 0x18, 
		0x18, 0x18, 0x18, 0xf8, 0xf8, 0x00, 0x00, 0x00, 
		0x18, 0x18, 0x18, 0x1f, 0x1f, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x03, 0x07, 0x0c, 0x18, 0x18, 
		0x00, 0x00, 0x00, 0xc0, 0xe0, 0x30, 0x18, 0x18, 
		0x18, 0x18, 0x30, 0xe0, 0xc0, 0x00, 0x00, 0x00, 
		0x18, 0x18, 0x0c, 0x07, 0x03, 0x00, 0x00, 0x00, 
		0x18, 0x18, 0x18, 0x1f, 0x1f, 0x18, 0x18, 0x18, 
		0x18, 0x18, 0x18, 0xf8, 0xf8, 0x18, 0x18, 0x18, 
		0x18, 0x18, 0x18, 0xff, 0xff, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0xff, 0xff, 0x18, 0x18, 0x18, 
		0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18, 
		0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 
		0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 
		0x18, 0x3c, 0x66, 0xc3, 0xc3, 0x66, 0x3c, 0x18, 
		0x18, 0x3c, 0x7e, 0xff, 0xff, 0x7e, 0x3c, 0x18, 
		0x18, 0x66, 0xc3, 0xdb, 0xdb, 0xc3, 0x66, 0x18, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x18, 0x00, 
		0x66, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x66, 0x66, 0xff, 0x66, 0xff, 0x66, 0x66, 0x00, 
		0x18, 0x3e, 0x60, 0x3c, 0x06, 0x7c, 0x18, 0x00, 
		0x62, 0x66, 0x0c, 0x18, 0x30, 0x66, 0x46, 0x00, 
		0x3c, 0x66, 0x3c, 0x38, 0x67, 0x66, 0x3f, 0x00, 
		0x30, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x0c, 0x18, 0x30, 0x30, 0x30, 0x18, 0x0c, 0x00, 
		0x30, 0x18, 0x0c, 0x0c, 0x0c, 0x18, 0x30, 0x00, 
		0x00, 0x66, 0x3c, 0xff, 0x3c, 0x66, 0x00, 0x00, 
		0x00, 0x18, 0x18, 0x7e, 0x18, 0x18, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30, 
		0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 
		0x00, 0x03, 0x06, 0x0c, 0x18, 0x30, 0x60, 0x00, 
		0x3c, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x00, 
		0x18, 0x18, 0x38, 0x18, 0x18, 0x18, 0x7e, 0x00, 
		0x3c, 0x66, 0x06, 0x0c, 0x30, 0x60, 0x7e, 0x00, 
		0x3c, 0x66, 0x06, 0x1c, 0x06, 0x66, 0x3c, 0x00, 
		0x06, 0x0e, 0x1e, 0x66, 0x7f, 0x06, 0x06, 0x00, 
		0x7e, 0x60, 0x7c, 0x06, 0x06, 0x66, 0x3c, 0x00, 
		0x3c, 0x66, 0x60, 0x7c, 0x66, 0x66, 0x3c, 0x00, 
		0x7e, 0x66, 0x0c, 0x18, 0x18, 0x18, 0x18, 0x00, 
		0x3c, 0x66, 0x66, 0x3c, 0x66, 0x66, 0x3c, 0x00, 
		0x3c, 0x66, 0x66, 0x3e, 0x06, 0x66, 0x3c, 0x00, 
		0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x00, 0x00, 
		0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x18, 0x30, 
		0x0e, 0x18, 0x30, 0x60, 0x30, 0x18, 0x0e, 0x00, 
		0x7c, 0x82, 0xba, 0xa2, 0xa2, 0xba, 0x82, 0x7c, 
		0x70, 0x18, 0x0c, 0x06, 0x0c, 0x18, 0x70, 0x00, 
		0x3c, 0x66, 0x06, 0x0c, 0x18, 0x00, 0x18, 0x00, 
		0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 
		0x18, 0x3c, 0x66, 0x7e, 0x66, 0x66, 0x66, 0x00, 
		0x7c, 0x66, 0x66, 0x7c, 0x66, 0x66, 0x7c, 0x00, 
		0x3c, 0x66, 0x60, 0x60, 0x60, 0x66, 0x3c, 0x00, 
		0x78, 0x6c, 0x66, 0x66, 0x66, 0x6c, 0x78, 0x00, 
		0x7e, 0x60, 0x60, 0x78, 0x60, 0x60, 0x7e, 0x00, 
		0x7e, 0x60, 0x60, 0x78, 0x60, 0x60, 0x60, 0x00, 
		0x3c, 0x66, 0x60, 0x6e, 0x66, 0x66, 0x3c, 0x00, 
		0x66, 0x66, 0x66, 0x7e, 0x66, 0x66, 0x66, 0x00, 
		0x3c, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3c, 0x00, 
		0x1e, 0x0c, 0x0c, 0x0c, 0x0c, 0x6c, 0x38, 0x00, 
		0x66, 0x6c, 0x78, 0x70, 0x78, 0x6c, 0x66, 0x00, 
		0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7e, 0x00, 
		0x63, 0x77, 0x7f, 0x6b, 0x63, 0x63, 0x63, 0x00, 
		0x66, 0x76, 0x7e, 0x7e, 0x6e, 0x66, 0x66, 0x00, 
		0x3c, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x00, 
		0x7c, 0x66, 0x66, 0x7c, 0x60, 0x60, 0x60, 0x00, 
		0x3c, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x0e, 0x00, 
		0x7c, 0x66, 0x66, 0x7c, 0x78, 0x6c, 0x66, 0x00, 
		0x3c, 0x66, 0x60, 0x3c, 0x06, 0x66, 0x3c, 0x00, 
		0x7e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 
		0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x00, 
		0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x18, 0x00, 
		0x63, 0x63, 0x63, 0x6b, 0x7f, 0x77, 0x63, 0x00, 
		0x66, 0x66, 0x3c, 0x18, 0x3c, 0x66, 0x66, 0x00, 
		0x66, 0x66, 0x66, 0x3c, 0x18, 0x18, 0x18, 0x00, 
		0x7e, 0x06, 0x0c, 0x18, 0x30, 0x60, 0x7e, 0x00, 
		0x66, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3e, 0x00, 
		0x66, 0x00, 0x3c, 0x06, 0x3e, 0x66, 0x3e, 0x00, 
		0x66, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0xdb, 0xdb, 0x00, 
		0x00, 0x10, 0x30, 0x7f, 0x7f, 0x30, 0x10, 0x00, 
		0x66, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x3c, 0x06, 0x3e, 0x66, 0x3e, 0x00, 
		0x00, 0x60, 0x60, 0x7c, 0x66, 0x66, 0x7c, 0x00, 
		0x00, 0x00, 0x3c, 0x60, 0x60, 0x60, 0x3c, 0x00, 
		0x00, 0x06, 0x06, 0x3e, 0x66, 0x66, 0x3e, 0x00, 
		0x00, 0x00, 0x3c, 0x66, 0x7e, 0x60, 0x3c, 0x00, 
		0x00, 0x0e, 0x18, 0x3e, 0x18, 0x18, 0x18, 0x00, 
		0x00, 0x00, 0x3e, 0x66, 0x66, 0x3e, 0x06, 0x7c, 
		0x00, 0x60, 0x60, 0x7c, 0x66, 0x66, 0x66, 0x00, 
		0x00, 0x18, 0x00, 0x38, 0x18, 0x18, 0x3c, 0x00, 
		0x00, 0x06, 0x00, 0x06, 0x06, 0x06, 0x06, 0x3c, 
		0x00, 0x60, 0x60, 0x6c, 0x78, 0x6c, 0x66, 0x00, 
		0x00, 0x38, 0x18, 0x18, 0x18, 0x18, 0x3c, 0x00, 
		0x00, 0x00, 0x66, 0x7f, 0x7f, 0x6b, 0x63, 0x00, 
		0x00, 0x00, 0x7c, 0x66, 0x66, 0x66, 0x66, 0x00, 
		0x00, 0x00, 0x3c, 0x66, 0x66, 0x66, 0x3c, 0x00, 
		0x00, 0x00, 0x7c, 0x66, 0x66, 0x7c, 0x60, 0x60, 
		0x00, 0x00, 0x3e, 0x66, 0x66, 0x3e, 0x06, 0x06, 
		0x00, 0x00, 0x7c, 0x66, 0x60, 0x60, 0x60, 0x00, 
		0x00, 0x00, 0x3e, 0x60, 0x3c, 0x06, 0x7c, 0x00, 
		0x00, 0x18, 0x7e, 0x18, 0x18, 0x18, 0x0e, 0x00, 
		0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3e, 0x00, 
		0x00, 0x00, 0x66, 0x66, 0x66, 0x3c, 0x18, 0x00, 
		0x00, 0x00, 0x63, 0x6b, 0x7f, 0x3e, 0x36, 0x00, 
		0x00, 0x00, 0x66, 0x3c, 0x18, 0x3c, 0x66, 0x00, 
		0x00, 0x00, 0x66, 0x66, 0x66, 0x3e, 0x0c, 0x78, 
		0x00, 0x00, 0x7e, 0x0c, 0x18, 0x30, 0x7e, 0x00, 
		0x66, 0x00, 0x3c, 0x66, 0x66, 0x66, 0x3c, 0x00, 
		0x66, 0x18, 0x3c, 0x66, 0x7e, 0x66, 0x66, 0x00, 
		0x42, 0x3c, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x00, 
		0x1c, 0x36, 0x36, 0x7c, 0x66, 0x66, 0x7c, 0x40, 
		0x08, 0x0c, 0x0e, 0xff, 0xff, 0x0e, 0x0c, 0x08, 
	};
	
	writeRecord(germanCharsetDataV2, sizeof(germanCharsetDataV2), GBVARS_GERMANCHARSETDATAV2_INDEX , GBVARS_SCUMM);
}

static void addCharset_frenchCharsetDataV2() {
	byte frenchCharsetDataV2[] = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x01, 0x03, 0x06, 0x0c, 0x18, 0x3e, 0x03, 0x00, 
		0x80, 0xc0, 0x60, 0x30, 0x18, 0x7c, 0xc0, 0x00, 
		0x00, 0x03, 0x3e, 0x18, 0x0c, 0x06, 0x03, 0x01, 
		0x00, 0xc0, 0x7c, 0x18, 0x30, 0x60, 0xc0, 0x80, 
		0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
		0x03, 0x03, 0x03, 0x07, 0x07, 0x0f, 0x1f, 0x7f, 
		0xe0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 
		0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 
		0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x0c, 0x18, 
		0x00, 0x00, 0x00, 0x80, 0xc0, 0x60, 0x30, 0x18, 
		0x18, 0x30, 0x60, 0xc0, 0x80, 0x00, 0x00, 0x00, 
		0x18, 0x0c, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x1f, 0x1f, 0x18, 0x18, 0x18, 
		0x00, 0x00, 0x00, 0xf8, 0xf8, 0x18, 0x18, 0x18, 
		0x18, 0x18, 0x18, 0xf8, 0xf8, 0x00, 0x00, 0x00, 
		0x18, 0x18, 0x18, 0x1f, 0x1f, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x03, 0x07, 0x0c, 0x18, 0x18, 
		0x00, 0x00, 0x00, 0xc0, 0xe0, 0x30, 0x18, 0x18, 
		0x18, 0x18, 0x30, 0xe0, 0xc0, 0x00, 0x00, 0x00, 
		0x18, 0x18, 0x0c, 0x07, 0x03, 0x00, 0x00, 0x00, 
		0x18, 0x18, 0x18, 0x1f, 0x1f, 0x18, 0x18, 0x18, 
		0x18, 0x18, 0x18, 0xf8, 0xf8, 0x18, 0x18, 0x18, 
		0x18, 0x18, 0x18, 0xff, 0xff, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0xff, 0xff, 0x18, 0x18, 0x18, 
		0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18, 
		0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 
		0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 
		0x18, 0x3c, 0x66, 0xc3, 0xc3, 0x66, 0x3c, 0x18, 
		0x18, 0x3c, 0x7e, 0xff, 0xff, 0x7e, 0x3c, 0x18, 
		0x18, 0x66, 0xc3, 0xdb, 0xdb, 0xc3, 0x66, 0x18, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x18, 0x00, 
		0x66, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x66, 0x66, 0xff, 0x66, 0xff, 0x66, 0x66, 0x00, 
		0x18, 0x3e, 0x60, 0x3c, 0x06, 0x7c, 0x18, 0x00, 
		0x62, 0x66, 0x0c, 0x18, 0x30, 0x66, 0x46, 0x00, 
		0x3c, 0x66, 0x3c, 0x38, 0x67, 0x66, 0x3f, 0x00, 
		0x30, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x0c, 0x18, 0x30, 0x30, 0x30, 0x18, 0x0c, 0x00, 
		0x30, 0x18, 0x0c, 0x0c, 0x0c, 0x18, 0x30, 0x00, 
		0x00, 0x66, 0x3c, 0xff, 0x3c, 0x66, 0x00, 0x00, 
		0x00, 0x18, 0x18, 0x7e, 0x18, 0x18, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30, 
		0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 
		0x00, 0x03, 0x06, 0x0c, 0x18, 0x30, 0x60, 0x00, 
		0x3c, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x00, 
		0x18, 0x18, 0x38, 0x18, 0x18, 0x18, 0x7e, 0x00, 
		0x3c, 0x66, 0x06, 0x0c, 0x30, 0x60, 0x7e, 0x00, 
		0x3c, 0x66, 0x06, 0x1c, 0x06, 0x66, 0x3c, 0x00, 
		0x06, 0x0e, 0x1e, 0x66, 0x7f, 0x06, 0x06, 0x00, 
		0x7e, 0x60, 0x7c, 0x06, 0x06, 0x66, 0x3c, 0x00, 
		0x3c, 0x66, 0x60, 0x7c, 0x66, 0x66, 0x3c, 0x00, 
		0x7e, 0x66, 0x0c, 0x18, 0x18, 0x18, 0x18, 0x00, 
		0x3c, 0x66, 0x66, 0x3c, 0x66, 0x66, 0x3c, 0x00, 
		0x3c, 0x66, 0x66, 0x3e, 0x06, 0x66, 0x3c, 0x00, 
		0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x00, 0x00, 
		0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x18, 0x30, 
		0x10, 0x08, 0x3c, 0x06, 0x3e, 0x66, 0x3e, 0x00, 
		0x18, 0x24, 0x3c, 0x06, 0x3e, 0x66, 0x3e, 0x00, 
		0x00, 0x00, 0x3c, 0x60, 0x60, 0x3c, 0x18, 0x38, 
		0x3c, 0x66, 0x06, 0x0c, 0x18, 0x00, 0x18, 0x00, 
		0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 
		0x18, 0x3c, 0x66, 0x7e, 0x66, 0x66, 0x66, 0x00, 
		0x7c, 0x66, 0x66, 0x7c, 0x66, 0x66, 0x7c, 0x00, 
		0x3c, 0x66, 0x60, 0x60, 0x60, 0x66, 0x3c, 0x00, 
		0x78, 0x6c, 0x66, 0x66, 0x66, 0x6c, 0x78, 0x00, 
		0x7e, 0x60, 0x60, 0x78, 0x60, 0x60, 0x7e, 0x00, 
		0x7e, 0x60, 0x60, 0x78, 0x60, 0x60, 0x60, 0x00, 
		0x3c, 0x66, 0x60, 0x6e, 0x66, 0x66, 0x3c, 0x00, 
		0x66, 0x66, 0x66, 0x7e, 0x66, 0x66, 0x66, 0x00, 
		0x3c, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3c, 0x00, 
		0x1e, 0x0c, 0x0c, 0x0c, 0x0c, 0x6c, 0x38, 0x00, 
		0x66, 0x6c, 0x78, 0x70, 0x78, 0x6c, 0x66, 0x00, 
		0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7e, 0x00, 
		0x63, 0x77, 0x7f, 0x6b, 0x63, 0x63, 0x63, 0x00, 
		0x66, 0x76, 0x7e, 0x7e, 0x6e, 0x66, 0x66, 0x00, 
		0x3c, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x00, 
		0x7c, 0x66, 0x66, 0x7c, 0x60, 0x60, 0x60, 0x00, 
		0x3c, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x0e, 0x00, 
		0x7c, 0x66, 0x66, 0x7c, 0x78, 0x6c, 0x66, 0x00, 
		0x3c, 0x66, 0x60, 0x3c, 0x06, 0x66, 0x3c, 0x00, 
		0x7e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 
		0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x00, 
		0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x18, 0x00, 
		0x63, 0x63, 0x63, 0x6b, 0x7f, 0x77, 0x63, 0x00, 
		0x66, 0x66, 0x3c, 0x18, 0x3c, 0x66, 0x66, 0x00, 
		0x66, 0x66, 0x66, 0x3c, 0x18, 0x18, 0x18, 0x00, 
		0x7e, 0x06, 0x0c, 0x18, 0x30, 0x60, 0x7e, 0x00, 
		0x08, 0x10, 0x3c, 0x66, 0x7e, 0x60, 0x3c, 0x00, 
		0x10, 0x08, 0x3c, 0x66, 0x7e, 0x60, 0x3c, 0x00, 
		0x18, 0x24, 0x3c, 0x66, 0x7e, 0x60, 0x3c, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0xdb, 0xdb, 0x00, 
		0x00, 0x6c, 0x00, 0x38, 0x18, 0x18, 0x3c, 0x00, 
		0x66, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x3c, 0x06, 0x3e, 0x66, 0x3e, 0x00, 
		0x00, 0x60, 0x60, 0x7c, 0x66, 0x66, 0x7c, 0x00, 
		0x00, 0x00, 0x3c, 0x60, 0x60, 0x60, 0x3c, 0x00, 
		0x00, 0x06, 0x06, 0x3e, 0x66, 0x66, 0x3e, 0x00, 
		0x00, 0x00, 0x3c, 0x66, 0x7e, 0x60, 0x3c, 0x00, 
		0x00, 0x0e, 0x18, 0x3e, 0x18, 0x18, 0x18, 0x00, 
		0x00, 0x00, 0x3e, 0x66, 0x66, 0x3e, 0x06, 0x7c, 
		0x00, 0x60, 0x60, 0x7c, 0x66, 0x66, 0x66, 0x00, 
		0x00, 0x18, 0x00, 0x38, 0x18, 0x18, 0x3c, 0x00, 
		0x00, 0x06, 0x00, 0x06, 0x06, 0x06, 0x06, 0x3c, 
		0x00, 0x60, 0x60, 0x6c, 0x78, 0x6c, 0x66, 0x00, 
		0x00, 0x38, 0x18, 0x18, 0x18, 0x18, 0x3c, 0x00, 
		0x00, 0x00, 0x66, 0x7f, 0x7f, 0x6b, 0x63, 0x00, 
		0x00, 0x00, 0x7c, 0x66, 0x66, 0x66, 0x66, 0x00, 
		0x00, 0x00, 0x3c, 0x66, 0x66, 0x66, 0x3c, 0x00, 
		0x00, 0x00, 0x7c, 0x66, 0x66, 0x7c, 0x60, 0x60, 
		0x00, 0x00, 0x3e, 0x66, 0x66, 0x3e, 0x06, 0x06, 
		0x00, 0x00, 0x7c, 0x66, 0x60, 0x60, 0x60, 0x00, 
		0x00, 0x00, 0x3e, 0x60, 0x3c, 0x06, 0x7c, 0x00, 
		0x00, 0x18, 0x7e, 0x18, 0x18, 0x18, 0x0e, 0x00, 
		0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3e, 0x00, 
		0x00, 0x00, 0x66, 0x66, 0x66, 0x3c, 0x18, 0x00, 
		0x00, 0x00, 0x63, 0x6b, 0x7f, 0x3e, 0x36, 0x00, 
		0x00, 0x00, 0x66, 0x3c, 0x18, 0x3c, 0x66, 0x00, 
		0x00, 0x00, 0x66, 0x66, 0x66, 0x3e, 0x0c, 0x78, 
		0x00, 0x00, 0x7e, 0x0c, 0x18, 0x30, 0x7e, 0x00, 
		0x18, 0x24, 0x00, 0x38, 0x18, 0x18, 0x3c, 0x00, 
		0x18, 0x24, 0x00, 0x3c, 0x66, 0x66, 0x3c, 0x00, 
		0x10, 0x08, 0x00, 0x66, 0x66, 0x66, 0x3e, 0x00, 
		0x18, 0x24, 0x00, 0x66, 0x66, 0x66, 0x3e, 0x00, 
		0x08, 0x0c, 0x0e, 0xff, 0xff, 0x0e, 0x0c, 0x08, 
	};
	
	writeRecord(frenchCharsetDataV2, sizeof(frenchCharsetDataV2), GBVARS_FRENCHCHARSETDATAV2_INDEX , GBVARS_SCUMM);
}

static void addCharset_englishCharsetDataV2() {
	byte englishCharsetDataV2[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0x03, 0x06, 0x0C, 0x18, 0x3E, 0x03, 0x00,
	0x80, 0xC0, 0x60, 0x30, 0x18, 0x7C, 0xC0, 0x00,
	0x00, 0x03, 0x3E, 0x18, 0x0C, 0x06, 0x03, 0x01,
	0x00, 0xC0, 0x7C, 0x18, 0x30, 0x60, 0xC0, 0x80,
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
	0x03, 0x03, 0x03, 0x07, 0x07, 0x0F, 0x1F, 0x7F,
	0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0,
	0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07,
	0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x0C, 0x18,
	0x00, 0x00, 0x00, 0x80, 0xC0, 0x60, 0x30, 0x18,
	0x18, 0x30, 0x60, 0xC0, 0x80, 0x00, 0x00, 0x00,
	0x18, 0x0C, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x1F, 0x1F, 0x18, 0x18, 0x18,
	0x00, 0x00, 0x00, 0xF8, 0xF8, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0xF8, 0xF8, 0x00, 0x00, 0x00,
	0x18, 0x18, 0x18, 0x1F, 0x1F, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x03, 0x07, 0x0C, 0x18, 0x18,
	0x00, 0x00, 0x00, 0xC0, 0xE0, 0x30, 0x18, 0x18,
	0x18, 0x18, 0x30, 0xE0, 0xC0, 0x00, 0x00, 0x00,
	0x18, 0x18, 0x0C, 0x07, 0x03, 0x00, 0x00, 0x00,
	0x18, 0x18, 0x18, 0x1F, 0x1F, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0xF8, 0xF8, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFF, 0xFF, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0xFF, 0xFF, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18,
	0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x18, 0x3C, 0x66, 0xC3, 0xC3, 0x66, 0x3C, 0x18,
	0x18, 0x3C, 0x7E, 0xFF, 0xFF, 0x7E, 0x3C, 0x18,
	0x18, 0x66, 0xC3, 0xDB, 0xDB, 0xC3, 0x66, 0x18,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x18, 0x00,
	0x66, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x66, 0x66, 0xFF, 0x66, 0xFF, 0x66, 0x66, 0x00,
	0x18, 0x3E, 0x58, 0x3C, 0x1A, 0x7C, 0x18, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x49, 0x00,
	0x3C, 0x66, 0x3C, 0x38, 0x67, 0x66, 0x3F, 0x00,
	0x06, 0x0C, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x0C, 0x18, 0x30, 0x30, 0x30, 0x18, 0x0C, 0x00,
	0x30, 0x18, 0x0C, 0x0C, 0x0C, 0x18, 0x30, 0x00,
	0x00, 0x66, 0x3C, 0xFF, 0x3C, 0x66, 0x00, 0x00,
	0x00, 0x18, 0x18, 0x7E, 0x18, 0x18, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30,
	0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00,
	0x00, 0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x00,
	0x3C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x00,
	0x18, 0x18, 0x38, 0x18, 0x18, 0x18, 0x7E, 0x00,
	0x3C, 0x66, 0x06, 0x0C, 0x30, 0x60, 0x7E, 0x00,
	0x3C, 0x66, 0x06, 0x1C, 0x06, 0x66, 0x3C, 0x00,
	0x06, 0x0E, 0x1E, 0x66, 0x7F, 0x06, 0x06, 0x00,
	0x7E, 0x60, 0x7C, 0x06, 0x06, 0x66, 0x3C, 0x00,
	0x3C, 0x66, 0x60, 0x7C, 0x66, 0x66, 0x3C, 0x00,
	0x7E, 0x66, 0x0C, 0x18, 0x18, 0x18, 0x18, 0x00,
	0x3C, 0x66, 0x66, 0x3C, 0x66, 0x66, 0x3C, 0x00,
	0x3C, 0x66, 0x66, 0x3E, 0x06, 0x66, 0x3C, 0x00,
	0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x00, 0x00,
	0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x18, 0x30,
	0x0E, 0x18, 0x30, 0x60, 0x30, 0x18, 0x0E, 0x00,
	0x7C, 0x82, 0xBA, 0xA2, 0xBA, 0x82, 0x7C, 0x00,
	0x70, 0x18, 0x0C, 0x06, 0x0C, 0x18, 0x70, 0x00,
	0x3C, 0x66, 0x06, 0x0C, 0x18, 0x00, 0x18, 0x00,
	0x00, 0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00,
	0x18, 0x3C, 0x66, 0x7E, 0x66, 0x66, 0x66, 0x00,
	0x7C, 0x66, 0x66, 0x7C, 0x66, 0x66, 0x7C, 0x00,
	0x3C, 0x66, 0x60, 0x60, 0x60, 0x66, 0x3C, 0x00,
	0x78, 0x6C, 0x66, 0x66, 0x66, 0x6C, 0x78, 0x00,
	0x7E, 0x60, 0x60, 0x78, 0x60, 0x60, 0x7E, 0x00,
	0x7E, 0x60, 0x60, 0x78, 0x60, 0x60, 0x60, 0x00,
	0x3C, 0x66, 0x60, 0x6E, 0x66, 0x66, 0x3C, 0x00,
	0x66, 0x66, 0x66, 0x7E, 0x66, 0x66, 0x66, 0x00,
	0x3C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00,
	0x1E, 0x0C, 0x0C, 0x0C, 0x0C, 0x6C, 0x38, 0x00,
	0x66, 0x6C, 0x78, 0x70, 0x78, 0x6C, 0x66, 0x00,
	0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7E, 0x00,
	0x63, 0x77, 0x7F, 0x6B, 0x63, 0x63, 0x63, 0x00,
	0x66, 0x76, 0x7E, 0x7E, 0x6E, 0x66, 0x66, 0x00,
	0x3C, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x00,
	0x7C, 0x66, 0x66, 0x7C, 0x60, 0x60, 0x60, 0x00,
	0x3C, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x0E, 0x00,
	0x7C, 0x66, 0x66, 0x7C, 0x78, 0x6C, 0x66, 0x00,
	0x3C, 0x66, 0x60, 0x3C, 0x06, 0x66, 0x3C, 0x00,
	0x7E, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00,
	0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x00,
	0x66, 0x66, 0x66, 0x66, 0x66, 0x3C, 0x18, 0x00,
	0x63, 0x63, 0x63, 0x6B, 0x7F, 0x77, 0x63, 0x00,
	0x66, 0x66, 0x3C, 0x18, 0x3C, 0x66, 0x66, 0x00,
	0x66, 0x66, 0x66, 0x3C, 0x18, 0x18, 0x18, 0x00,
	0x7E, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x7E, 0x00,
	0x3C, 0x30, 0x30, 0x30, 0x30, 0x30, 0x3C, 0x00,
	0x0C, 0x12, 0x30, 0x7C, 0x30, 0x62, 0xFC, 0x00,
	0x3C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x3C, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xDB, 0xDB, 0x00,
	0x00, 0x10, 0x30, 0x7F, 0x7F, 0x30, 0x10, 0x00,
	0x66, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x3C, 0x06, 0x3E, 0x66, 0x3E, 0x00,
	0x00, 0x60, 0x60, 0x7C, 0x66, 0x66, 0x7C, 0x00,
	0x00, 0x00, 0x3C, 0x60, 0x60, 0x60, 0x3C, 0x00,
	0x00, 0x06, 0x06, 0x3E, 0x66, 0x66, 0x3E, 0x00,
	0x00, 0x00, 0x3C, 0x66, 0x7E, 0x60, 0x3C, 0x00,
	0x00, 0x0E, 0x18, 0x3E, 0x18, 0x18, 0x18, 0x00,
	0x00, 0x00, 0x3E, 0x66, 0x66, 0x3E, 0x06, 0x7C,
	0x00, 0x60, 0x60, 0x7C, 0x66, 0x66, 0x66, 0x00,
	0x00, 0x18, 0x00, 0x38, 0x18, 0x18, 0x3C, 0x00,
	0x00, 0x06, 0x00, 0x06, 0x06, 0x06, 0x06, 0x3C,
	0x00, 0x60, 0x60, 0x6C, 0x78, 0x6C, 0x66, 0x00,
	0x00, 0x38, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00,
	0x00, 0x00, 0x66, 0x7F, 0x7F, 0x6B, 0x63, 0x00,
	0x00, 0x00, 0x7C, 0x66, 0x66, 0x66, 0x66, 0x00,
	0x00, 0x00, 0x3C, 0x66, 0x66, 0x66, 0x3C, 0x00,
	0x00, 0x00, 0x7C, 0x66, 0x66, 0x7C, 0x60, 0x60,
	0x00, 0x00, 0x3E, 0x66, 0x66, 0x3E, 0x06, 0x06,
	0x00, 0x00, 0x7C, 0x66, 0x60, 0x60, 0x60, 0x00,
	0x00, 0x00, 0x3E, 0x60, 0x3C, 0x06, 0x7C, 0x00,
	0x00, 0x18, 0x7E, 0x18, 0x18, 0x18, 0x0E, 0x00,
	0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3E, 0x00,
	0x00, 0x00, 0x66, 0x66, 0x66, 0x3C, 0x18, 0x00,
	0x00, 0x00, 0x63, 0x6B, 0x7F, 0x3E, 0x36, 0x00,
	0x00, 0x00, 0x66, 0x3C, 0x18, 0x3C, 0x66, 0x00,
	0x00, 0x00, 0x66, 0x66, 0x66, 0x3E, 0x0C, 0x78,
	0x00, 0x00, 0x7E, 0x0C, 0x18, 0x30, 0x7E, 0x00,
	0x01, 0x03, 0x06, 0x6C, 0x78, 0x70, 0x60, 0x00,
	0x18, 0x3C, 0x7E, 0xFF, 0x18, 0x18, 0x18, 0x18,
	0x18, 0x18, 0x18, 0x18, 0xFF, 0x7E, 0x3C, 0x18,
	0x10, 0x30, 0x70, 0xFF, 0xFF, 0x70, 0x30, 0x10,
	0x08, 0x0C, 0x0E, 0xFF, 0xFF, 0x0E, 0x0C, 0x08,
	};
	
	writeRecord(englishCharsetDataV2, sizeof(englishCharsetDataV2), GBVARS_ENGLISHCHARSETDATAV2_INDEX , GBVARS_SCUMM);
}

static void addCharset_italianCharsetDataV2() {
	byte italianCharsetDataV2[] = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x01, 0x03, 0x06, 0x0c, 0x18, 0x3e, 0x03, 0x00, 
		0x80, 0xc0, 0x60, 0x30, 0x18, 0x7c, 0xc0, 0x00, 
		0x00, 0x03, 0x3e, 0x18, 0x0c, 0x06, 0x03, 0x01, 
		0x00, 0xc0, 0x7c, 0x18, 0x30, 0x60, 0xc0, 0x80, 
		0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
		0x03, 0x03, 0x03, 0x07, 0x07, 0x0f, 0x1f, 0x7f, 
		0xe0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 
		0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 
		0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x0c, 0x18, 
		0x00, 0x00, 0x00, 0x80, 0xc0, 0x60, 0x30, 0x18, 
		0x18, 0x30, 0x60, 0xc0, 0x80, 0x00, 0x00, 0x00, 
		0x18, 0x0c, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x1f, 0x1f, 0x18, 0x18, 0x18, 
		0x00, 0x00, 0x00, 0xf8, 0xf8, 0x18, 0x18, 0x18, 
		0x18, 0x18, 0x18, 0xf8, 0xf8, 0x00, 0x00, 0x00, 
		0x18, 0x18, 0x18, 0x1f, 0x1f, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x03, 0x07, 0x0c, 0x18, 0x18, 
		0x00, 0x00, 0x00, 0xc0, 0xe0, 0x30, 0x18, 0x18, 
		0x18, 0x18, 0x30, 0xe0, 0xc0, 0x00, 0x00, 0x00, 
		0x18, 0x18, 0x0c, 0x07, 0x03, 0x00, 0x00, 0x00, 
		0x18, 0x18, 0x18, 0x1f, 0x1f, 0x18, 0x18, 0x18, 
		0x18, 0x18, 0x18, 0xf8, 0xf8, 0x18, 0x18, 0x18, 
		0x18, 0x18, 0x18, 0xff, 0xff, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0xff, 0xff, 0x18, 0x18, 0x18, 
		0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18, 
		0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 
		0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 
		0x18, 0x3c, 0x66, 0xc3, 0xc3, 0x66, 0x3c, 0x18, 
		0x18, 0x3c, 0x7e, 0xff, 0xff, 0x7e, 0x3c, 0x18, 
		0x18, 0x66, 0xc3, 0xdb, 0xdb, 0xc3, 0x66, 0x18, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x18, 0x00, 
		0x66, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x66, 0x66, 0xff, 0x66, 0xff, 0x66, 0x66, 0x00, 
		0x18, 0x3e, 0x60, 0x3c, 0x06, 0x7c, 0x18, 0x00, 
		0x62, 0x66, 0x0c, 0x18, 0x30, 0x66, 0x46, 0x00, 
		0x3c, 0x66, 0x3c, 0x38, 0x67, 0x66, 0x3f, 0x00, 
		0x30, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x0c, 0x18, 0x30, 0x30, 0x30, 0x18, 0x0c, 0x00, 
		0x30, 0x18, 0x0c, 0x0c, 0x0c, 0x18, 0x30, 0x00, 
		0x00, 0x66, 0x3c, 0xff, 0x3c, 0x66, 0x00, 0x00, 
		0x00, 0x18, 0x18, 0x7e, 0x18, 0x18, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30, 
		0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 
		0x00, 0x03, 0x06, 0x0c, 0x18, 0x30, 0x60, 0x00, 
		0x3c, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x00, 
		0x18, 0x18, 0x38, 0x18, 0x18, 0x18, 0x7e, 0x00, 
		0x3c, 0x66, 0x06, 0x0c, 0x30, 0x60, 0x7e, 0x00, 
		0x3c, 0x66, 0x06, 0x1c, 0x06, 0x66, 0x3c, 0x00, 
		0x06, 0x0e, 0x1e, 0x66, 0x7f, 0x06, 0x06, 0x00, 
		0x7e, 0x60, 0x7c, 0x06, 0x06, 0x66, 0x3c, 0x00, 
		0x3c, 0x66, 0x60, 0x7c, 0x66, 0x66, 0x3c, 0x00, 
		0x7e, 0x66, 0x0c, 0x18, 0x18, 0x18, 0x18, 0x00, 
		0x3c, 0x66, 0x66, 0x3c, 0x66, 0x66, 0x3c, 0x00, 
		0x3c, 0x66, 0x66, 0x3e, 0x06, 0x66, 0x3c, 0x00, 
		0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x00, 0x00, 
		0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x18, 0x30, 
		0x10, 0x08, 0x3c, 0x06, 0x3e, 0x66, 0x3e, 0x00, 
		0x18, 0x24, 0x3c, 0x06, 0x3e, 0x66, 0x3e, 0x00, 
		0x00, 0x00, 0x3c, 0x60, 0x60, 0x3c, 0x18, 0x38, 
		0x3c, 0x66, 0x06, 0x0c, 0x18, 0x00, 0x18, 0x00, 
		0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 
		0x18, 0x3c, 0x66, 0x7e, 0x66, 0x66, 0x66, 0x00, 
		0x7c, 0x66, 0x66, 0x7c, 0x66, 0x66, 0x7c, 0x00, 
		0x3c, 0x66, 0x60, 0x60, 0x60, 0x66, 0x3c, 0x00, 
		0x78, 0x6c, 0x66, 0x66, 0x66, 0x6c, 0x78, 0x00, 
		0x7e, 0x60, 0x60, 0x78, 0x60, 0x60, 0x7e, 0x00, 
		0x7e, 0x60, 0x60, 0x78, 0x60, 0x60, 0x60, 0x00, 
		0x3c, 0x66, 0x60, 0x6e, 0x66, 0x66, 0x3c, 0x00, 
		0x66, 0x66, 0x66, 0x7e, 0x66, 0x66, 0x66, 0x00, 
		0x3c, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3c, 0x00, 
		0x1e, 0x0c, 0x0c, 0x0c, 0x0c, 0x6c, 0x38, 0x00, 
		0x66, 0x6c, 0x78, 0x70, 0x78, 0x6c, 0x66, 0x00, 
		0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7e, 0x00, 
		0x63, 0x77, 0x7f, 0x6b, 0x63, 0x63, 0x63, 0x00, 
		0x66, 0x76, 0x7e, 0x7e, 0x6e, 0x66, 0x66, 0x00, 
		0x3c, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x00, 
		0x7c, 0x66, 0x66, 0x7c, 0x60, 0x60, 0x60, 0x00, 
		0x3c, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x0e, 0x00, 
		0x7c, 0x66, 0x66, 0x7c, 0x78, 0x6c, 0x66, 0x00, 
		0x3c, 0x66, 0x60, 0x3c, 0x06, 0x66, 0x3c, 0x00, 
		0x7e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 
		0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x00, 
		0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x18, 0x00, 
		0x63, 0x63, 0x63, 0x6b, 0x7f, 0x77, 0x63, 0x00, 
		0x66, 0x66, 0x3c, 0x18, 0x3c, 0x66, 0x66, 0x00, 
		0x66, 0x66, 0x66, 0x3c, 0x18, 0x18, 0x18, 0x00, 
		0x7e, 0x06, 0x0c, 0x18, 0x30, 0x60, 0x7e, 0x00, 
		0x08, 0x10, 0x3c, 0x66, 0x7e, 0x60, 0x3c, 0x00, 
		0x10, 0x08, 0x3c, 0x66, 0x7e, 0x60, 0x3c, 0x00, 
		0x18, 0x24, 0x3c, 0x66, 0x7e, 0x60, 0x3c, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0xdb, 0xdb, 0x00, 
		0x00, 0x6c, 0x00, 0x38, 0x18, 0x18, 0x3c, 0x00, 
		0x66, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x3c, 0x06, 0x3e, 0x66, 0x3e, 0x00, 
		0x00, 0x60, 0x60, 0x7c, 0x66, 0x66, 0x7c, 0x00, 
		0x00, 0x00, 0x3c, 0x60, 0x60, 0x60, 0x3c, 0x00, 
		0x00, 0x06, 0x06, 0x3e, 0x66, 0x66, 0x3e, 0x00, 
		0x00, 0x00, 0x3c, 0x66, 0x7e, 0x60, 0x3c, 0x00, 
		0x00, 0x0e, 0x18, 0x3e, 0x18, 0x18, 0x18, 0x00, 
		0x00, 0x00, 0x3e, 0x66, 0x66, 0x3e, 0x06, 0x7c, 
		0x00, 0x60, 0x60, 0x7c, 0x66, 0x66, 0x66, 0x00, 
		0x00, 0x18, 0x00, 0x38, 0x18, 0x18, 0x3c, 0x00, 
		0x00, 0x06, 0x00, 0x06, 0x06, 0x06, 0x06, 0x3c, 
		0x00, 0x60, 0x60, 0x6c, 0x78, 0x6c, 0x66, 0x00, 
		0x00, 0x38, 0x18, 0x18, 0x18, 0x18, 0x3c, 0x00, 
		0x00, 0x00, 0x66, 0x7f, 0x7f, 0x6b, 0x63, 0x00, 
		0x00, 0x00, 0x7c, 0x66, 0x66, 0x66, 0x66, 0x00, 
		0x00, 0x00, 0x3c, 0x66, 0x66, 0x66, 0x3c, 0x00, 
		0x00, 0x00, 0x7c, 0x66, 0x66, 0x7c, 0x60, 0x60, 
		0x00, 0x00, 0x3e, 0x66, 0x66, 0x3e, 0x06, 0x06, 
		0x00, 0x00, 0x7c, 0x66, 0x60, 0x60, 0x60, 0x00, 
		0x00, 0x00, 0x3e, 0x60, 0x3c, 0x06, 0x7c, 0x00, 
		0x00, 0x18, 0x7e, 0x18, 0x18, 0x18, 0x0e, 0x00, 
		0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3e, 0x00, 
		0x00, 0x00, 0x66, 0x66, 0x66, 0x3c, 0x18, 0x00, 
		0x00, 0x00, 0x63, 0x6b, 0x7f, 0x3e, 0x36, 0x00, 
		0x00, 0x00, 0x66, 0x3c, 0x18, 0x3c, 0x66, 0x00, 
		0x00, 0x00, 0x66, 0x66, 0x66, 0x3e, 0x0c, 0x78, 
		0x00, 0x00, 0x7e, 0x0c, 0x18, 0x30, 0x7e, 0x00, 
		0x18, 0x24, 0x00, 0x38, 0x18, 0x18, 0x3c, 0x00, 
		0x18, 0x24, 0x00, 0x3c, 0x66, 0x66, 0x3c, 0x00, 
		0x10, 0x08, 0x00, 0x66, 0x66, 0x66, 0x3e, 0x00, 
		0x18, 0x24, 0x00, 0x66, 0x66, 0x66, 0x3e, 0x00, 
		0x08, 0x0c, 0x0e, 0xff, 0xff, 0x0e, 0x0c, 0x08, 
	};
	
	writeRecord(italianCharsetDataV2, sizeof(italianCharsetDataV2), GBVARS_ITALIANCHARSETDATAV2_INDEX , GBVARS_SCUMM);
}

static void addCharset_spanishCharsetDataV2() {
	byte spanishCharsetDataV2[] = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x01, 0x03, 0x06, 0x0c, 0x18, 0x3e, 0x03, 0x00, 
		0x80, 0xc0, 0x60, 0x30, 0x18, 0x7c, 0xc0, 0x00, 
		0x00, 0x03, 0x3e, 0x18, 0x0c, 0x06, 0x03, 0x01, 
		0x00, 0xc0, 0x7c, 0x18, 0x30, 0x60, 0xc0, 0x80, 
		0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
		0x03, 0x03, 0x03, 0x07, 0x07, 0x0f, 0x1f, 0x7f, 
		0xe0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 
		0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 
		0x00, 0x00, 0x00, 0x01, 0x03, 0x06, 0x0c, 0x18, 
		0x00, 0x00, 0x00, 0x80, 0xc0, 0x60, 0x30, 0x18, 
		0x18, 0x30, 0x60, 0xc0, 0x80, 0x00, 0x00, 0x00, 
		0x18, 0x0c, 0x06, 0x03, 0x01, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x1f, 0x1f, 0x18, 0x18, 0x18, 
		0x00, 0x00, 0x00, 0xf8, 0xf8, 0x18, 0x18, 0x18, 
		0x18, 0x18, 0x18, 0xf8, 0xf8, 0x00, 0x00, 0x00, 
		0x18, 0x18, 0x18, 0x1f, 0x1f, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x03, 0x07, 0x0c, 0x18, 0x18, 
		0x00, 0x00, 0x00, 0xc0, 0xe0, 0x30, 0x18, 0x18, 
		0x18, 0x18, 0x30, 0xe0, 0xc0, 0x00, 0x00, 0x00, 
		0x18, 0x18, 0x0c, 0x07, 0x03, 0x00, 0x00, 0x00, 
		0x18, 0x18, 0x18, 0x1f, 0x1f, 0x18, 0x18, 0x18, 
		0x18, 0x18, 0x18, 0xf8, 0xf8, 0x18, 0x18, 0x18, 
		0x18, 0x18, 0x18, 0xff, 0xff, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0xff, 0xff, 0x18, 0x18, 0x18, 
		0x18, 0x18, 0x18, 0xff, 0xff, 0x18, 0x18, 0x18, 
		0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 
		0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 
		0x18, 0x3c, 0x66, 0xc3, 0xc3, 0x66, 0x3c, 0x18, 
		0x18, 0x3c, 0x7e, 0xff, 0xff, 0x7e, 0x3c, 0x18, 
		0x18, 0x66, 0xc3, 0xdb, 0xdb, 0xc3, 0x66, 0x18, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x18, 0x00, 
		0x66, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x66, 0x66, 0xff, 0x66, 0xff, 0x66, 0x66, 0x00, 
		0x18, 0x3e, 0x60, 0x3c, 0x06, 0x7c, 0x18, 0x00, 
		0x62, 0x66, 0x0c, 0x18, 0x30, 0x66, 0x46, 0x00, 
		0x3c, 0x66, 0x3c, 0x38, 0x67, 0x66, 0x3f, 0x00, 
		0x30, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x0c, 0x18, 0x30, 0x30, 0x30, 0x18, 0x0c, 0x00, 
		0x30, 0x18, 0x0c, 0x0c, 0x0c, 0x18, 0x30, 0x00, 
		0x00, 0x66, 0x3c, 0xff, 0x3c, 0x66, 0x00, 0x00, 
		0x00, 0x18, 0x18, 0x7e, 0x18, 0x18, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x30, 
		0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 
		0x00, 0x03, 0x06, 0x0c, 0x18, 0x30, 0x60, 0x00, 
		0x3c, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x00, 
		0x18, 0x18, 0x38, 0x18, 0x18, 0x18, 0x7e, 0x00, 
		0x3c, 0x66, 0x06, 0x0c, 0x30, 0x60, 0x7e, 0x00, 
		0x3c, 0x66, 0x06, 0x1c, 0x06, 0x66, 0x3c, 0x00, 
		0x06, 0x0e, 0x1e, 0x66, 0x7f, 0x06, 0x06, 0x00, 
		0x7e, 0x60, 0x7c, 0x06, 0x06, 0x66, 0x3c, 0x00, 
		0x3c, 0x66, 0x60, 0x7c, 0x66, 0x66, 0x3c, 0x00, 
		0x7e, 0x66, 0x0c, 0x18, 0x18, 0x18, 0x18, 0x00, 
		0x3c, 0x66, 0x66, 0x3c, 0x66, 0x66, 0x3c, 0x00, 
		0x3c, 0x66, 0x66, 0x3e, 0x06, 0x66, 0x3c, 0x00, 
		0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x00, 0x00, 
		0x00, 0x00, 0x18, 0x00, 0x00, 0x18, 0x18, 0x30, 
		0x10, 0x08, 0x3c, 0x06, 0x3e, 0x66, 0x3e, 0x00, 
		0x18, 0x24, 0x3c, 0x06, 0x3e, 0x66, 0x3e, 0x00, 
		0x00, 0x00, 0x3c, 0x60, 0x60, 0x3c, 0x18, 0x38, 
		0x3c, 0x66, 0x06, 0x0c, 0x18, 0x00, 0x18, 0x00, 
		0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 
		0x18, 0x3c, 0x66, 0x7e, 0x66, 0x66, 0x66, 0x00, 
		0x7c, 0x66, 0x66, 0x7c, 0x66, 0x66, 0x7c, 0x00, 
		0x3c, 0x66, 0x60, 0x60, 0x60, 0x66, 0x3c, 0x00, 
		0x78, 0x6c, 0x66, 0x66, 0x66, 0x6c, 0x78, 0x00, 
		0x7e, 0x60, 0x60, 0x78, 0x60, 0x60, 0x7e, 0x00, 
		0x7e, 0x60, 0x60, 0x78, 0x60, 0x60, 0x60, 0x00, 
		0x3c, 0x66, 0x60, 0x6e, 0x66, 0x66, 0x3c, 0x00, 
		0x66, 0x66, 0x66, 0x7e, 0x66, 0x66, 0x66, 0x00, 
		0x3c, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3c, 0x00, 
		0x1e, 0x0c, 0x0c, 0x0c, 0x0c, 0x6c, 0x38, 0x00, 
		0x66, 0x6c, 0x78, 0x70, 0x78, 0x6c, 0x66, 0x00, 
		0x60, 0x60, 0x60, 0x60, 0x60, 0x60, 0x7e, 0x00, 
		0x63, 0x77, 0x7f, 0x6b, 0x63, 0x63, 0x63, 0x00, 
		0x66, 0x76, 0x7e, 0x7e, 0x6e, 0x66, 0x66, 0x00, 
		0x3c, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x00, 
		0x7c, 0x66, 0x66, 0x7c, 0x60, 0x60, 0x60, 0x00, 
		0x3c, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x0e, 0x00, 
		0x7c, 0x66, 0x66, 0x7c, 0x78, 0x6c, 0x66, 0x00, 
		0x3c, 0x66, 0x60, 0x3c, 0x06, 0x66, 0x3c, 0x00, 
		0x7e, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 
		0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x00, 
		0x66, 0x66, 0x66, 0x66, 0x66, 0x3c, 0x18, 0x00, 
		0x63, 0x63, 0x63, 0x6b, 0x7f, 0x77, 0x63, 0x00, 
		0x66, 0x66, 0x3c, 0x18, 0x3c, 0x66, 0x66, 0x00, 
		0x66, 0x66, 0x66, 0x3c, 0x18, 0x18, 0x18, 0x00, 
		0x7e, 0x06, 0x0c, 0x18, 0x30, 0x60, 0x7e, 0x00, 
		0x08, 0x10, 0x3c, 0x66, 0x7e, 0x60, 0x3c, 0x00, 
		0x10, 0x08, 0x3c, 0x66, 0x7e, 0x60, 0x3c, 0x00, 
		0x18, 0x24, 0x3c, 0x66, 0x7e, 0x60, 0x3c, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0xdb, 0xdb, 0x00, 
		0x00, 0x6c, 0x00, 0x38, 0x18, 0x18, 0x3c, 0x00, 
		0x66, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x3c, 0x06, 0x3e, 0x66, 0x3e, 0x00, 
		0x00, 0x60, 0x60, 0x7c, 0x66, 0x66, 0x7c, 0x00, 
		0x00, 0x00, 0x3c, 0x60, 0x60, 0x60, 0x3c, 0x00, 
		0x00, 0x06, 0x06, 0x3e, 0x66, 0x66, 0x3e, 0x00, 
		0x00, 0x00, 0x3c, 0x66, 0x7e, 0x60, 0x3c, 0x00, 
		0x00, 0x0e, 0x18, 0x3e, 0x18, 0x18, 0x18, 0x00, 
		0x00, 0x00, 0x3e, 0x66, 0x66, 0x3e, 0x06, 0x7c, 
		0x00, 0x60, 0x60, 0x7c, 0x66, 0x66, 0x66, 0x00, 
		0x00, 0x18, 0x00, 0x38, 0x18, 0x18, 0x3c, 0x00, 
		0x00, 0x06, 0x00, 0x06, 0x06, 0x06, 0x06, 0x3c, 
		0x00, 0x60, 0x60, 0x6c, 0x78, 0x6c, 0x66, 0x00, 
		0x00, 0x38, 0x18, 0x18, 0x18, 0x18, 0x3c, 0x00, 
		0x00, 0x00, 0x66, 0x7f, 0x7f, 0x6b, 0x63, 0x00, 
		0x00, 0x00, 0x7c, 0x66, 0x66, 0x66, 0x66, 0x00, 
		0x00, 0x00, 0x3c, 0x66, 0x66, 0x66, 0x3c, 0x00, 
		0x00, 0x00, 0x7c, 0x66, 0x66, 0x7c, 0x60, 0x60, 
		0x00, 0x00, 0x3e, 0x66, 0x66, 0x3e, 0x06, 0x06, 
		0x00, 0x00, 0x7c, 0x66, 0x60, 0x60, 0x60, 0x00, 
		0x00, 0x00, 0x3e, 0x60, 0x3c, 0x06, 0x7c, 0x00, 
		0x00, 0x18, 0x7e, 0x18, 0x18, 0x18, 0x0e, 0x00, 
		0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x3e, 0x00, 
		0x00, 0x00, 0x66, 0x66, 0x66, 0x3c, 0x18, 0x00, 
		0x00, 0x00, 0x63, 0x6b, 0x7f, 0x3e, 0x36, 0x00, 
		0x00, 0x00, 0x66, 0x3c, 0x18, 0x3c, 0x66, 0x00, 
		0x00, 0x00, 0x66, 0x66, 0x66, 0x3e, 0x0c, 0x78, 
		0x00, 0x00, 0x7e, 0x0c, 0x18, 0x30, 0x7e, 0x00, 
		0x18, 0x24, 0x00, 0x38, 0x18, 0x18, 0x3c, 0x00, 
		0x18, 0x24, 0x00, 0x3c, 0x66, 0x66, 0x3c, 0x00, 
		0x10, 0x08, 0x00, 0x66, 0x66, 0x66, 0x3e, 0x00, 
		0x18, 0x24, 0x00, 0x66, 0x66, 0x66, 0x3e, 0x00, 
		0x08, 0x0c, 0x0e, 0xff, 0xff, 0x0e, 0x0c, 0x08, 
	};
	
	writeRecord(spanishCharsetDataV2, sizeof(spanishCharsetDataV2), GBVARS_SPANISHCHARSETDATAV2_INDEX , GBVARS_SCUMM);
}
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

void addCharset() {
	addCharset_germanCharsetDataV2();
	addCharset_frenchCharsetDataV2();
	addCharset_englishCharsetDataV2();
	addCharset_italianCharsetDataV2();
	addCharset_spanishCharsetDataV2();
}
