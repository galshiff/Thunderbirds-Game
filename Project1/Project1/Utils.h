#pragma once

void gotoxy(int, int);
void clrscr();
void hide_cursor();
int printMainMenu();
void printWinMessage();
void printLoseMessage();
char printPauseMessage();

struct Keys {
	constexpr static char ESC = 27;
	constexpr static char Up = 'w';
	constexpr static char Right = 'd';
	constexpr static char Down = 'x';
	constexpr static char Left = 'a';
	constexpr static char BigShip = 'b';
	constexpr static char SmallShip = 's';
};