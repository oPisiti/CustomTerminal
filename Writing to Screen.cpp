#define OLC_PGE_APPLICATION

#include "olcPixelGameEngine.h"
#include <iostream>
#include <vector>

class MyText : public olc::PixelGameEngine {
private:
	olc::Pixel backColor = {50, 50, 50, 255};

	// FONT
	// https://github.com/basti79/LCD-fonts
	std::vector<std::vector<uint8_t>> font= {
		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x00
		{0x7E,0x81,0xA5,0x81,0xBD,0x99,0x81,0x7E},	// 0x01
		{0x7E,0xFF,0xDB,0xFF,0xC3,0xE7,0xFF,0x7E},	// 0x02
		{0x36,0x7F,0x7F,0x7F,0x3E,0x1C,0x08,0x00},	// 0x03
		{0x08,0x1C,0x3E,0x7F,0x3E,0x1C,0x08,0x00},	// 0x04
		{0x1C,0x3E,0x1C,0x7F,0x7F,0x6B,0x08,0x1C},	// 0x05
		{0x08,0x08,0x1C,0x3E,0x7F,0x3E,0x08,0x1C},	// 0x06
		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x07
		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x08
		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x09
		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x0A
		{0xF0,0xE0,0xF0,0xBE,0x33,0x33,0x33,0x1E},	// 0x0B
		{0x3C,0x66,0x66,0x66,0x3C,0x18,0x7E,0x18},	// 0x0C
		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x0D
		{0xFE,0xC6,0xFE,0xC6,0xC6,0xE6,0x67,0x03},	// 0x0E
		{0x99,0x5A,0x3C,0xE7,0xE7,0x3C,0x5A,0x99},	// 0x0F
		{0x01,0x07,0x1F,0x7F,0x1F,0x07,0x01,0x00},	// 0x10
		{0x40,0x70,0x7C,0x7F,0x7C,0x70,0x40,0x00},	// 0x11
		{0x18,0x3C,0x7E,0x18,0x18,0x7E,0x3C,0x18},	// 0x12
		{0x66,0x66,0x66,0x66,0x66,0x00,0x66,0x00},	// 0x13
		{0xFE,0xDB,0xDB,0xDE,0xD8,0xD8,0xD8,0x00},	// 0x14
		{0x7E,0xC3,0x1E,0x33,0x33,0x1E,0x31,0x1F},	// 0x15
		{0x00,0x00,0x00,0x00,0x7E,0x7E,0x7E,0x00},	// 0x16
		{0x18,0x3C,0x7E,0x18,0x7E,0x3C,0x18,0xFF},	// 0x17
		{0x18,0x3C,0x7E,0x18,0x18,0x18,0x18,0x00},	// 0x18
		{0x18,0x18,0x18,0x18,0x7E,0x3C,0x18,0x00},	// 0x19
		{0x00,0x18,0x30,0x7F,0x30,0x18,0x00,0x00},	// 0x1A
		{0x00,0x0C,0x06,0x7F,0x06,0x0C,0x00,0x00},	// 0x1B
		{0x00,0x00,0x03,0x03,0x03,0x7F,0x00,0x00},	// 0x1C
		{0x00,0x24,0x66,0xFF,0x66,0x24,0x00,0x00},	// 0x1D
		{0x00,0x18,0x3C,0x7E,0xFF,0xFF,0x00,0x00},	// 0x1E
		{0x00,0xFF,0xFF,0x7E,0x3C,0x18,0x00,0x00},	// 0x1F
		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x20
		{0x0C,0x1E,0x1E,0x0C,0x0C,0x00,0x0C,0x00},	// 0x21
		{0x36,0x36,0x36,0x00,0x00,0x00,0x00,0x00},	// 0x22
		{0x36,0x36,0x7F,0x36,0x7F,0x36,0x36,0x00},	// 0x23
		{0x0C,0x3E,0x03,0x1E,0x30,0x1F,0x0C,0x00},	// 0x24
		{0x00,0x63,0x33,0x18,0x0C,0x66,0x63,0x00},	// 0x25
		{0x1C,0x36,0x1C,0x6E,0x3B,0x33,0x6E,0x00},	// 0x26
		{0x06,0x06,0x03,0x00,0x00,0x00,0x00,0x00},	// 0x27
		{0x18,0x0C,0x06,0x06,0x06,0x0C,0x18,0x00},	// 0x28
		{0x06,0x0C,0x18,0x18,0x18,0x0C,0x06,0x00},	// 0x29
		{0x00,0x66,0x3C,0xFF,0x3C,0x66,0x00,0x00},	// 0x2A
		{0x00,0x0C,0x0C,0x3F,0x0C,0x0C,0x00,0x00},	// 0x2B
		{0x00,0x00,0x00,0x00,0x00,0x0E,0x0C,0x06},	// 0x2C
		{0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00},	// 0x2D
		{0x00,0x00,0x00,0x00,0x00,0x0C,0x0C,0x00},	// 0x2E
		{0x60,0x30,0x18,0x0C,0x06,0x03,0x01,0x00},	// 0x2F
		{0x1E,0x33,0x3B,0x3F,0x37,0x33,0x1E,0x00},	// 0x30
		{0x0C,0x0F,0x0C,0x0C,0x0C,0x0C,0x3F,0x00},	// 0x31
		{0x1E,0x33,0x30,0x1C,0x06,0x33,0x3F,0x00},	// 0x32
		{0x1E,0x33,0x30,0x1C,0x30,0x33,0x1E,0x00},	// 0x33
		{0x38,0x3C,0x36,0x33,0x7F,0x30,0x30,0x00},	// 0x34
		{0x3F,0x03,0x1F,0x30,0x30,0x33,0x1E,0x00},	// 0x35
		{0x1C,0x06,0x03,0x1F,0x33,0x33,0x1E,0x00},	// 0x36
		{0x3F,0x33,0x30,0x18,0x0C,0x06,0x06,0x00},	// 0x37
		{0x1E,0x33,0x33,0x1E,0x33,0x33,0x1E,0x00},	// 0x38
		{0x1E,0x33,0x33,0x3E,0x30,0x18,0x0E,0x00},	// 0x39
		{0x00,0x00,0x0C,0x0C,0x00,0x0C,0x0C,0x00},	// 0x3A
		{0x00,0x00,0x0C,0x0C,0x00,0x0E,0x0C,0x06},	// 0x3B
		{0x18,0x0C,0x06,0x03,0x06,0x0C,0x18,0x00},	// 0x3C
		{0x00,0x00,0x3F,0x00,0x3F,0x00,0x00,0x00},	// 0x3D
		{0x06,0x0C,0x18,0x30,0x18,0x0C,0x06,0x00},	// 0x3E
		{0x1E,0x33,0x30,0x18,0x0C,0x00,0x0C,0x00},	// 0x3F
		{0x3E,0x63,0x7B,0x7B,0x7B,0x03,0x1E,0x00},	// 0x40
		{0x0C,0x1E,0x33,0x33,0x3F,0x33,0x33,0x00},	// 0x41
		{0x3F,0x66,0x66,0x3E,0x66,0x66,0x3F,0x00},	// 0x42
		{0x3C,0x66,0x03,0x03,0x03,0x66,0x3C,0x00},	// 0x43
		{0x3F,0x36,0x66,0x66,0x66,0x36,0x3F,0x00},	// 0x44
		{0x7F,0x46,0x16,0x1E,0x16,0x46,0x7F,0x00},	// 0x45
		{0x7F,0x46,0x16,0x1E,0x16,0x06,0x0F,0x00},	// 0x46
		{0x3C,0x66,0x03,0x03,0x73,0x66,0x7C,0x00},	// 0x47
		{0x33,0x33,0x33,0x3F,0x33,0x33,0x33,0x00},	// 0x48
		{0x1E,0x0C,0x0C,0x0C,0x0C,0x0C,0x1E,0x00},	// 0x49
		{0x78,0x30,0x30,0x30,0x33,0x33,0x1E,0x00},	// 0x4A
		{0x67,0x66,0x36,0x1E,0x36,0x66,0x67,0x00},	// 0x4B
		{0x0F,0x06,0x06,0x06,0x46,0x66,0x7F,0x00},	// 0x4C
		{0x63,0x77,0x7F,0x6B,0x63,0x63,0x63,0x00},	// 0x4D
		{0x63,0x67,0x6F,0x7B,0x73,0x63,0x63,0x00},	// 0x4E
		{0x1C,0x36,0x63,0x63,0x63,0x36,0x1C,0x00},	// 0x4F
		{0x3F,0x66,0x66,0x3E,0x06,0x06,0x0F,0x00},	// 0x50
		{0x1E,0x33,0x33,0x33,0x3B,0x1E,0x38,0x00},	// 0x51
		{0x3F,0x66,0x66,0x3E,0x1E,0x36,0x67,0x00},	// 0x52
		{0x1E,0x33,0x07,0x1C,0x38,0x33,0x1E,0x00},	// 0x53
		{0x3F,0x2D,0x0C,0x0C,0x0C,0x0C,0x1E,0x00},	// 0x54
		{0x33,0x33,0x33,0x33,0x33,0x33,0x3F,0x00},	// 0x55
		{0x33,0x33,0x33,0x33,0x33,0x1E,0x0C,0x00},	// 0x56
		{0x63,0x63,0x63,0x6B,0x7F,0x77,0x63,0x00},	// 0x57
		{0x63,0x63,0x36,0x1C,0x36,0x63,0x63,0x00},	// 0x58
		{0x33,0x33,0x33,0x1E,0x0C,0x0C,0x1E,0x00},	// 0x59
		{0x7F,0x33,0x19,0x0C,0x46,0x63,0x7F,0x00},	// 0x5A
		{0x1E,0x06,0x06,0x06,0x06,0x06,0x1E,0x00},	// 0x5B
		{0x03,0x06,0x0C,0x18,0x30,0x60,0x40,0x00},	// 0x5C
		{0x1E,0x18,0x18,0x18,0x18,0x18,0x1E,0x00},	// 0x5D
		{0x08,0x1C,0x36,0x63,0x00,0x00,0x00,0x00},	// 0x5E
		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF},	// 0x5F
		{0x0C,0x0C,0x18,0x00,0x00,0x00,0x00,0x00},	// 0x60
		{0x00,0x00,0x1E,0x30,0x3E,0x33,0x6E,0x00},	// 0x61
		{0x07,0x06,0x3E,0x66,0x66,0x66,0x3D,0x00},	// 0x62
		{0x00,0x00,0x1E,0x33,0x03,0x33,0x1E,0x00},	// 0x63
		{0x38,0x30,0x30,0x3E,0x33,0x33,0x6E,0x00},	// 0x64
		{0x00,0x00,0x1E,0x33,0x3F,0x03,0x1E,0x00},	// 0x65
		{0x1C,0x36,0x06,0x0F,0x06,0x06,0x0F,0x00},	// 0x66
		{0x00,0x00,0x6E,0x33,0x33,0x3E,0x30,0x1F},	// 0x67
		{0x07,0x06,0x36,0x6E,0x66,0x66,0x67,0x00},	// 0x68
		{0x0C,0x00,0x0E,0x0C,0x0C,0x0C,0x1E,0x00},	// 0x69
		{0x18,0x00,0x1E,0x18,0x18,0x18,0x1B,0x0E},	// 0x6A
		{0x07,0x06,0x66,0x36,0x1E,0x36,0x67,0x00},	// 0x6B
		{0x0E,0x0C,0x0C,0x0C,0x0C,0x0C,0x1E,0x00},	// 0x6C
		{0x00,0x00,0x37,0x7F,0x6B,0x63,0x63,0x00},	// 0x6D
		{0x00,0x00,0x1F,0x33,0x33,0x33,0x33,0x00},	// 0x6E
		{0x00,0x00,0x1E,0x33,0x33,0x33,0x1E,0x00},	// 0x6F
		{0x00,0x00,0x3B,0x66,0x66,0x3E,0x06,0x0F},	// 0x70
		{0x00,0x00,0x6E,0x33,0x33,0x3E,0x30,0x78},	// 0x71
		{0x00,0x00,0x1B,0x36,0x36,0x06,0x0F,0x00},	// 0x72
		{0x00,0x00,0x3E,0x03,0x1E,0x30,0x1F,0x00},	// 0x73
		{0x08,0x0C,0x3E,0x0C,0x0C,0x2C,0x18,0x00},	// 0x74
		{0x00,0x00,0x33,0x33,0x33,0x33,0x6E,0x00},	// 0x75
		{0x00,0x00,0x33,0x33,0x33,0x1E,0x0C,0x00},	// 0x76
		{0x00,0x00,0x63,0x63,0x6B,0x7F,0x36,0x00},	// 0x77
		{0x00,0x00,0x63,0x36,0x1C,0x36,0x63,0x00},	// 0x78
		{0x00,0x00,0x33,0x33,0x33,0x3E,0x30,0x1F},	// 0x79
		{0x00,0x00,0x3F,0x19,0x0C,0x26,0x3F,0x00},	// 0x7A
		{0x38,0x0C,0x0C,0x07,0x0C,0x0C,0x38,0x00},	// 0x7B
		{0x18,0x18,0x18,0x00,0x18,0x18,0x18,0x00},	// 0x7C
		{0x07,0x0C,0x0C,0x38,0x0C,0x0C,0x07,0x00},	// 0x7D
		{0x6E,0x3B,0x00,0x00,0x00,0x00,0x00,0x00},	// 0x7E
		{0x08,0x1C,0x36,0x63,0x63,0x63,0x7F,0x00},	// 0x7F
		{0x1E,0x33,0x03,0x03,0x33,0x1E,0x0C,0x06},	// 0x80
		{0x00,0x33,0x00,0x33,0x33,0x33,0x7E,0x00},	// 0x81
		{0x18,0x0C,0x1E,0x33,0x3F,0x03,0x1E,0x00},	// 0x82
		{0x7E,0xC3,0x3C,0x60,0x7C,0x66,0xFC,0x00},	// 0x83
		{0x33,0x00,0x1E,0x30,0x3E,0x33,0x7E,0x00},	// 0x84
		{0x06,0x0C,0x1E,0x30,0x3E,0x33,0x7E,0x00},	// 0x85
		{0x3C,0x66,0x3C,0x60,0x7C,0x66,0xFC,0x00},	// 0x86
		{0x00,0x1E,0x33,0x03,0x33,0x1E,0x0C,0x06},	// 0x87
		{0x7E,0xC3,0x3C,0x66,0x7E,0x06,0x3C,0x00},	// 0x88
		{0x33,0x00,0x1E,0x33,0x3F,0x03,0x1E,0x00},	// 0x89
		{0x06,0x0C,0x1E,0x33,0x3F,0x03,0x1E,0x00},	// 0x8A
		{0x33,0x00,0x0E,0x0C,0x0C,0x0C,0x1E,0x00},	// 0x8B
		{0x3E,0x63,0x1C,0x18,0x18,0x18,0x3C,0x00},	// 0x8C
		{0x06,0x0C,0x0E,0x0C,0x0C,0x0C,0x1E,0x00},	// 0x8D
		{0x33,0x0C,0x1E,0x33,0x33,0x3F,0x33,0x00},	// 0x8E
		{0x0C,0x12,0x0C,0x1E,0x33,0x3F,0x33,0x00},	// 0x8F
		{0x18,0x0C,0x3F,0x06,0x1E,0x06,0x3F,0x00},	// 0x90
		{0x00,0x00,0xFE,0x30,0xFE,0x33,0xFE,0x00},	// 0x91
		{0x7C,0x36,0x33,0x7F,0x33,0x33,0x73,0x00},	// 0x92
		{0x1E,0x33,0x00,0x1E,0x33,0x33,0x1E,0x00},	// 0x93
		{0x00,0x33,0x00,0x1E,0x33,0x33,0x1E,0x00},	// 0x94
		{0x06,0x0C,0x00,0x1E,0x33,0x33,0x1E,0x00},	// 0x95
		{0x1E,0x33,0x00,0x33,0x33,0x33,0x7E,0x00},	// 0x96
		{0x06,0x0C,0x00,0x33,0x33,0x33,0x7E,0x00},	// 0x97
		{0x00,0x33,0x00,0x33,0x33,0x3F,0x30,0x1F},	// 0x98
		{0x63,0x00,0x3E,0x63,0x63,0x63,0x3E,0x00},	// 0x99
		{0x33,0x00,0x33,0x33,0x33,0x33,0x1E,0x00},	// 0x9A
		{0x00,0x00,0x3E,0x73,0x6B,0x67,0x3E,0x00},	// 0x9B
		{0x1C,0x36,0x26,0x0F,0x06,0x67,0x3F,0x00},	// 0x9C
		{0x5C,0x36,0x73,0x6B,0x67,0x36,0x1D,0x00},	// 0x9D
		{0x00,0x00,0x33,0x1E,0x0C,0x1E,0x33,0x00},	// 0x9E
		{0x70,0xD8,0x18,0x7E,0x18,0x18,0x1B,0x0E},	// 0x9F
		{0x18,0x0C,0x1E,0x30,0x3E,0x33,0x7E,0x00},	// 0xA0
		{0x18,0x0C,0x0E,0x0C,0x0C,0x0C,0x1E,0x00},	// 0xA1
		{0x30,0x18,0x00,0x1E,0x33,0x33,0x1E,0x00},	// 0xA2
		{0x30,0x18,0x00,0x33,0x33,0x33,0x7E,0x00},	// 0xA3
		{0x6E,0x3B,0x00,0x1F,0x33,0x33,0x33,0x00},	// 0xA4
		{0x6E,0x3B,0x00,0x37,0x3F,0x3B,0x33,0x00},	// 0xA5
		{0x3C,0x36,0x36,0x7C,0x00,0x7E,0x00,0x00},	// 0xA6
		{0x3C,0x66,0x66,0x3C,0x00,0x7E,0x00,0x00},	// 0xA7
		{0x0C,0x00,0x0C,0x06,0x03,0x33,0x1E,0x00},	// 0xA8
		{0x3C,0x5A,0xA5,0x9D,0x95,0x66,0x3C,0x00},	// 0xA9
		{0x00,0x00,0x00,0x3F,0x30,0x30,0x00,0x00},	// 0xAA
		{0x67,0x36,0x1E,0x7E,0xC6,0x73,0x19,0xF8},	// 0xAB
		{0x67,0x36,0x1E,0xCE,0xE6,0xB3,0xF9,0xC0},	// 0xAC
		{0x00,0x18,0x00,0x18,0x18,0x3C,0x3C,0x18},	// 0xAD
		{0x00,0xCC,0x66,0x33,0x66,0xCC,0x00,0x00},	// 0xAE
		{0x00,0x33,0x66,0xCC,0x66,0x33,0x00,0x00},	// 0xAF
		{0x44,0x11,0x44,0x11,0x44,0x11,0x44,0x11},	// 0xB0
		{0xAA,0x55,0xAA,0x55,0xAA,0x55,0xAA,0x55},	// 0xB1
		{0xBB,0xEE,0xBB,0xEE,0xBB,0xEE,0xBB,0xEE},	// 0xB2
		{0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x18},	// 0xB3
		{0x18,0x18,0x18,0x18,0x1F,0x18,0x18,0x18},	// 0xB4
		{0x30,0x18,0x0C,0x1E,0x33,0x3F,0x33,0x00},	// 0xB5
		{0x1E,0x21,0x0C,0x1E,0x33,0x3F,0x33,0x00},	// 0xB6
		{0x03,0x06,0x0C,0x1E,0x33,0x3F,0x33,0x00},	// 0xB7
		{0x3C,0x42,0x9D,0x85,0x9D,0x42,0x3C,0x00},	// 0xB8
		{0x6C,0x6C,0x6F,0x60,0x6F,0x6C,0x6C,0x6C},	// 0xB9
		{0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C,0x6C},	// 0xBA
		{0x00,0x00,0x7F,0x60,0x6F,0x6C,0x6C,0x6C},	// 0xBB
		{0x6C,0x6C,0x6F,0x60,0x7F,0x00,0x00,0x00},	// 0xBC
		{0x18,0x18,0x7E,0x03,0x03,0x7E,0x18,0x18},	// 0xBD
		{0x33,0x33,0x1E,0x3F,0x0C,0x3F,0x0C,0x0C},	// 0xBE
		{0x00,0x00,0x00,0x00,0x1F,0x18,0x18,0x18},	// 0xBF
		{0x18,0x18,0x18,0x18,0xF8,0x00,0x00,0x00},	// 0xC0
		{0x18,0x18,0x18,0x18,0xFF,0x00,0x00,0x00},	// 0xC1
		{0x00,0x00,0x00,0x00,0xFF,0x18,0x18,0x18},	// 0xC2
		{0x18,0x18,0x18,0x18,0xF8,0x18,0x18,0x18},	// 0xC3
		{0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00},	// 0xC4
		{0x18,0x18,0x18,0x18,0xFF,0x18,0x18,0x18},	// 0xC5
		{0x6E,0x3B,0x1E,0x30,0x3E,0x33,0x7E,0x00},	// 0xC6
		{0x6E,0x3B,0x0C,0x1E,0x33,0x3F,0x33,0x00},	// 0xC7
		{0x6C,0x6C,0xEC,0x0C,0xFC,0x00,0x00,0x00},	// 0xC8
		{0x00,0x00,0xFC,0x0C,0xEC,0x6C,0x6C,0x6C},	// 0xC9
		{0x6C,0x6C,0xEF,0x00,0xFF,0x00,0x00,0x00},	// 0xCA
		{0x00,0x00,0xFF,0x00,0xEF,0x6C,0x6C,0x6C},	// 0xCB
		{0x6C,0x6C,0xEC,0x0C,0xEC,0x6C,0x6C,0x6C},	// 0xCC
		{0x00,0x00,0xFF,0x00,0xFF,0x00,0x00,0x00},	// 0xCD
		{0x6C,0x6C,0xEF,0x00,0xEF,0x6C,0x6C,0x6C},	// 0xCE
		{0x00,0x41,0x7F,0x36,0x36,0x7F,0x41,0x00},	// 0xCF
		{0x1B,0x0E,0x1B,0x30,0x3C,0x36,0x1C,0x00},	// 0xD0
		{0x3F,0x36,0x66,0x6F,0x66,0x36,0x3F,0x00},	// 0xD1
		{0x1E,0x21,0x3F,0x06,0x1E,0x06,0x3F,0x00},	// 0xD2
		{0x33,0x00,0x3F,0x06,0x1E,0x06,0x3F,0x00},	// 0xD3
		{0x06,0x0C,0x3F,0x06,0x1E,0x06,0x3F,0x00},	// 0xD4
		{0x00,0x03,0x02,0x07,0x00,0x00,0x00,0x00},	// 0xD5
		{0x18,0x0C,0x1E,0x0C,0x0C,0x0C,0x1E,0x00},	// 0xD6
		{0x1E,0x21,0x1E,0x0C,0x0C,0x0C,0x1E,0x00},	// 0xD7
		{0x33,0x00,0x1E,0x0C,0x0C,0x0C,0x1E,0x00},	// 0xD8
		{0x18,0x18,0x18,0x18,0x1F,0x00,0x00,0x00},	// 0xD9
		{0x00,0x00,0x00,0x00,0xF8,0x18,0x18,0x18},	// 0xDA
		{0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},	// 0xDB
		{0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF},	// 0xDC
		{0x18,0x18,0x18,0x00,0x18,0x18,0x18,0x00},	// 0xDD
		{0x06,0x0C,0x1E,0x0C,0x0C,0x0C,0x1E,0x00},	// 0xDE
		{0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00},	// 0xDF
		{0x18,0x0C,0x3E,0x63,0x63,0x63,0x3E,0x00},	// 0xE0
		{0x00,0x1E,0x33,0x1F,0x33,0x1F,0x03,0x03},	// 0xE1
		{0x3E,0x41,0x3E,0x63,0x63,0x63,0x3E,0x00},	// 0xE2
		{0x0C,0x18,0x3E,0x63,0x63,0x63,0x3E,0x00},	// 0xE3
		{0x6E,0x3B,0x00,0x1E,0x33,0x33,0x1E,0x00},	// 0xE4
		{0x6E,0x3B,0x3E,0x63,0x63,0x63,0x3E,0x00},	// 0xE5
		{0x00,0x66,0x66,0x66,0x66,0x3E,0x06,0x03},	// 0xE6
		{0x00,0x07,0x1E,0x36,0x1E,0x06,0x0F,0x00},	// 0xE7
		{0x0F,0x06,0x3E,0x66,0x3E,0x06,0x0F,0x00},	// 0xE8
		{0x18,0x0C,0x33,0x33,0x33,0x33,0x1E,0x00},	// 0xE9
		{0x1E,0x21,0x00,0x33,0x33,0x33,0x1E,0x00},	// 0xEA
		{0x06,0x0C,0x33,0x33,0x33,0x33,0x1E,0x00},	// 0xEB
		{0x18,0x0C,0x00,0x33,0x33,0x3F,0x30,0x1F},	// 0xEC
		{0x18,0x0C,0x33,0x33,0x1E,0x0C,0x1E,0x00},	// 0xED
		{0x00,0x3F,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xEE
		{0x18,0x0C,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xEF
		{0x00,0x00,0x00,0x00,0x3F,0x00,0x00,0x00},	// 0xF0
		{0x0C,0x0C,0x3F,0x0C,0x0C,0x00,0x3F,0x00},	// 0xF1
		{0x00,0x00,0x00,0x3F,0x00,0x3F,0x00,0x00},	// 0xF2
		{0x67,0x34,0x1E,0xCC,0xE7,0xB3,0xF9,0xC0},	// 0xF3
		{0xFE,0xDB,0xDB,0xDE,0xD8,0xD8,0xD8,0x00},	// 0xF4
		{0x7E,0xC3,0x1E,0x33,0x33,0x1E,0x31,0x1F},	// 0xF5
		{0x0C,0x0C,0x00,0x3F,0x00,0x0C,0x0C,0x00},	// 0xF6
		{0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x06},	// 0xF7
		{0x1C,0x36,0x36,0x1C,0x00,0x00,0x00,0x00},	// 0xF8
		{0x00,0x33,0x00,0x00,0x00,0x00,0x00,0x00},	// 0xF9
		{0x00,0x00,0x00,0x00,0x18,0x00,0x00,0x00},	// 0xFA
		{0x1C,0x1E,0x18,0x18,0x7E,0x00,0x00,0x00},	// 0xFB
		{0x3E,0x70,0x3C,0x70,0x3E,0x00,0x00,0x00},	// 0xFC
		{0x1E,0x30,0x1C,0x06,0x3E,0x00,0x00,0x00},	// 0xFD
		{0x00,0x00,0x3C,0x3C,0x3C,0x3C,0x00,0x00},	// 0xFE
		{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00} 	// 0xFF
		};

	int initCharPosX = 10, initCharPosY = 10;			// Offset to begin drawing the first character
	unsigned int charWidth = 8, charHeight = 8;			// The grid in which to draw the pixels
	unsigned int charac = 0, charScale = 1;
	unsigned int minScale = 1, maxScale = 10;			// For zooming

	// Keys
	std::vector<uint8_t> pressedKeys, heldKeys;
	bool shiftIsHeld = false, backspaceIsHeld = false;
	std::string text = "C:>", addChar;					// Constant initial text on screen
	const int initTextSize = text.size();
	bool newChar = false;

	// Time and blinking stuff
	float timeCount;									// Loops from 0 to maxTimeBlink
	float maxTimeBlink = 0.75;							// Intervals in which the blinking light turns on and off
	uint8_t blinkChar = 3;								// Which char (based on ascii) to 
	bool drawBlinker = true;
	std::vector<uint32_t> blinkerPos = {0, 0};			// Position to draw the blinker
	//int maxSingleLineChars;								// Max number of characters able to be displayed given current zoom

public:

	MyText() {
		sAppName = "Putting text to screen";
	}

	void drawCharacter(int32_t x, int32_t y, uint8_t Char, std::vector<std::vector<uint8_t>>& data, unsigned int scale = 1,
		olc::Pixel color = olc::RED, unsigned int charWidth = 8, unsigned int charHeight = 8) {

		uint8_t curPosX, curPosY;		// Positions inside the font matrix
		int32_t screenX, screenY;		// Positions regarding the screen pixels

		for (int hei = 0; hei < charHeight; hei++) {
			curPosY = hei;
			screenY = y + hei * scale;
			for (int wid = 0; wid < charWidth; wid++) {
				curPosX = wid;
				screenX = x + wid * scale;

				// https://stackoverflow.com/questions/2249731/how-do-i-get-bit-by-bit-data-from-an-integer-value-in-c
				if ((data[Char][curPosY] & (1 << curPosX)) >> curPosX) {
					for (int i = 0; i < scale; i++) {
						for (int j = 0; j < scale; j++) {
							Draw(screenX + i, screenY + j, color);
						}
					}
				}
			}
		}
	}

	void drawString(int32_t initialX, int32_t initialY, std::string str, std::vector<std::vector<uint8_t>>& data, int screenWidth, std::vector<uint32_t>& blinkerPos, unsigned int scale = 1,
		olc::Pixel color = olc::RED, unsigned int charWidth = 8, unsigned int charHeight = 8) {

		int32_t y = initialY;
		int maxSingleLineChars = (screenWidth - initialX) / (charWidth * scale);

		int mod;
		for (int elemNum = 0; elemNum < str.size(); elemNum++) {
			// If screen space ends, jump to next line
			mod = elemNum % maxSingleLineChars;
			if (!mod && elemNum) {									
				y += charHeight * scale;
			}

			drawCharacter(initialX + charWidth * mod * scale, y, str[elemNum], data, scale, color, charWidth, charHeight);
		}

		// Adjusting the blinker position
		mod = str.size() % maxSingleLineChars;
		if (!mod) {
			y += charHeight * scale;
		}
		blinkerPos = { initialX + uint32_t(charWidth * mod * scale), uint32_t(y)};
	}

	// Called once at the start, so create things here
	bool OnUserCreate() override {
		return true;
	}

	// Called once per frame
	bool OnUserUpdate(float fElapsedTime) override {
		Clear(backColor);

		// Zooming - Each wheel tick equals 120 in value (??)
		if (GetMouseWheel()) {
			int wheel = GetMouseWheel() / 120;

			charScale += wheel;
			if (charScale < minScale) charScale = minScale;
			else if (charScale > maxScale) charScale = maxScale;

		}

		// Getting keys	
		pressedKeys = GetAllPressedKeys();
		heldKeys = GetAllHeldKeys();
		shiftIsHeld = isShiftHeld();
		backspaceIsHeld = isBackspaceHeld();

		// Handling discrepencies between ASCII norm and what "GetAllKeys()" returns.
		newChar = true;
		if (pressedKeys.size() > 0) {
			for (auto key : pressedKeys) {
				addChar = key;	// Default
								
				// olc::PixelGameEngine simply returns different positions for each character.
				// For example, "a" is the first position, not position 97, or 0x61. See https://www.asciitable.com/ for more

				if (key >= 0 && key <= 26) {
					addChar = key + 96;													// a-z
					if (shiftIsHeld) {													// SHIFT
						addChar = key + 64;												// A-Z
					}
				}

				else if (key >= 27 && key <= 36) {
					addChar = key + 21;													// Numbers
					if (shiftIsHeld) {
						 addChar = key + 5;												// Special Number characters
					}
				}

				else if (key >= 69 && key <= 78)			addChar = key - 21;			// Numbers on Numpad
				else if (key == 53)							addChar = key - 21;			// SPACE
				else if (key == 63) {													// BACKSPACE
					if (text.size() > initTextSize)	text.pop_back();
					newChar = false;
				}
				else if (key == 84)			addChar = key - 38;							// .
				else if (key == 86)			addChar = key - 42;							// ,
				else newChar = false;
			}

			if (newChar) {
				// Resetting the count if user typed something - Prevents unnecessary blinking all the time (weird)
				timeCount = 0.0f;

				// The actual appending
				text += addChar;
			}
		}
		
		

		// Drawing the whole String. If only one character needed, try "drawCharacter"
		drawString(initCharPosX, initCharPosY, text, font, ScreenWidth(), blinkerPos, charScale);

		// Blinking of last character
		timeCount += fElapsedTime;
		if (timeCount > maxTimeBlink) {
			drawBlinker = !drawBlinker;
			timeCount -= maxTimeBlink;

			//// In the case of holding down backspace - Continuous deletion
			//if (heldKeys.size() > 0) {
			//	for (auto key : heldKeys) {
			//		if (key == 63) {					// BACKSPACE
			//			if (text.size() > initTextSize)	text.pop_back();
			//		}				
			//	}
			//}
		}

		if (drawBlinker) drawCharacter(blinkerPos[0], blinkerPos[1], blinkChar, font, charScale);
		
		if (pressedKeys.size() > 0) std::cout << pressedKeys.back() << std::endl;

		return true;
	}
};


int main(){
	MyText myText;
	if (myText.Construct(600, 500, 2, 2))
		myText.Start();

	return 0;
}
