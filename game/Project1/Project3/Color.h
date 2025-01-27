#pragma once
#include <windows.h>

enum TextColor
{
	BLACK = 0,
	BLUE = 1,
	GREEN = 2,
	CYAN = 3,
	RED = 4,
	MAGENTA = 5,
	BROWN = 6,
	LIGHTGREY = 7,
	DARKGREY = 8,
	LIGHTBLUE = 9,
	LIGHTGREEN = 10,
	LIGHTCYAN = 11,
	LIGHTRED = 12,
	LIGHTMAGENTA = 13,
	YELLOW = 14,
	WHITE = 15
};

class Color
{
	static bool isInColorMode;
public:
	//Color() { isInColorMode = false; }
	static void setColorMode(bool mode) { isInColorMode = mode; }
	static void setTextColor(TextColor color);
};
