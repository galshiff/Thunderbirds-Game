#include "Block.h"
#include "Ship.h"
#include "Point.h"
#include "Board.h"
#include "Color.h"

Block::Block(char _ch, int _size, Board* _pBoard) : ch(_ch), size(_size), pBoard(_pBoard) {
	points = _pBoard->getPoints(_ch, _size);
}

void Block::move(int dirx, int diry) {
	//for (int i = 0; i < size; i++) {
	//	int new_x = points[i].getX() + dirx;
	//	int new_y = points[i].getY() + diry;
	//	if (pBoard->get(new_x, new_y) != ' ' && pBoard->get(new_x, new_y) != ch) { // pos is already taken
	//		dirx = diry = 0;
	//		return;
	//	}
	//}
	deleteFromScreen();
	for (int i = 0; i < points.size(); i++) {
		points[i].move(dirx, diry);
	}
	drawOnScreen();
}

void Block::setPointsIndexes(int dirx, int diry) {
	for (int i = 0; i < points.size(); i++) {
		points[i].move(dirx, diry);
	}
}

void Block::drawOnScreen() const {
	Color::setTextColor(TextColor::BROWN);
	for (int i = 0; i < points.size(); i++) {
		points[i].drawOnScreen();
	}
	Color::setTextColor(TextColor::WHITE);
}

void Block::deleteFromScreen() const {
	for (int i = 0; i < points.size(); i++) {
		points[i].deleteFromScreen();
	}
}

bool Block::isBlockIncludesPoint(Point p) {
	for (int i = 0; i < points.size(); i++) {
		if (points[i].getX() == p.getX() && points[i].getY() == p.getY())
			return true;
	}

	return false;
}