#pragma once

#include <iostream>
#include <vector>
#include "Utils.h"
#include "Board.h"

enum class ShipsIndex { BIG_SHIP, SMALL_SHIP };

class Ship {
	char ch;
	int size;
	bool hasReachedEndPoint = false;
	Board* pBoard = nullptr;
	std::vector<Point> points;
public:
	Ship(char _ch, int _size, Board* _pBoard);
	void resetLocatin() { points = pBoard->getPoints(ch, size); }
	void move(int& difx, int& dify);
	void drawOnScreen() const;
	void deleteFromScreen() const;
	bool endPointStatus() { return hasReachedEndPoint; }
};

