/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

/*
 * This code is based on original Soltys source code
 * Copyright (c) 1994-1995 Janus B. Wisniewski and L.K. Avalon
 */

#ifndef	__WAV__
#define	__WAV__

#include	"cge/general.h"
#include	<string.h>

#define		WAVE_FORMAT_PCM		0x0001
#define		IBM_FORMAT_MULAW	0x0101
#define		IBM_FORMAT_ALAW		0x0102
#define		IBM_FORMAT_ADPCM	0x0103



typedef char FOURCC[4];				// Four-character code
typedef dword CKSIZE;				// 32-bit unsigned size


class CKID // Chunk type identifier
{
  union { FOURCC Tx; dword Id; };
protected:
  static XFILE * ckFile;
public:
  CKID (FOURCC t) { memcpy(Tx, t, sizeof(Tx)); }
  CKID (dword d) { Id = d; }
  CKID (XFILE * xf) { (ckFile = xf)->Read(Tx, sizeof(Tx)); }
  bool operator !=(CKID& X) { return Id != X.Id; }
  bool operator ==(CKID& X) { return Id == X.Id; }
  const char * Name (void);
};




class CKHEA : public CKID
{
protected:
  CKSIZE ckSize;		// Chunk size field (size of ckData)
public:
  CKHEA (XFILE * xf) : CKID(xf) { XRead(xf, &ckSize); }
  CKHEA (char id[]) : CKID(id), ckSize(0) { }
  void Skip (void);
  CKSIZE Size (void) { return ckSize; }
};





class FMTCK : public CKHEA
{
  struct WAV
  {
    word  wFormatTag;         // Format category
    word  wChannels;          // Number of channels
    dword dwSamplesPerSec;    // Sampling rate
    dword dwAvgBytesPerSec;   // For buffer estimation
    word  wBlockAlign;        // Data block size
  } Wav;

  union
  {
    struct PCM
    {
      word wBitsPerSample;      // Sample size
    } Pcm;
  };
public:
  FMTCK (CKHEA& hea);
  inline  word Channels (void) { return Wav.wChannels; }
  inline dword SmplRate (void) { return Wav.dwSamplesPerSec; }
  inline dword ByteRate (void) { return Wav.dwAvgBytesPerSec; }
  inline  word BlckSize (void) { return Wav.wBlockAlign; }
  inline  word SmplSize (void) { return Pcm.wBitsPerSample; }
};





class DATACK : public CKHEA
{
  bool e;
  union
    {
      byte * Buf;
      EMS * EBuf;
    };
public:
  DATACK (CKHEA& hea);
  DATACK (CKHEA& hea, EMM * emm);
  DATACK (int first, int last);
  ~DATACK (void);
  inline byte * Addr (void) { return Buf; }
  inline EMS * EAddr (void) { return EBuf; }
};



extern	CKID	RIFF;
extern	CKID	WAVE;
extern	CKID	FMT;
extern	CKID	DATA;


DATACK *	LoadWave	(XFILE * file, EMM * emm = NULL);


#endif
