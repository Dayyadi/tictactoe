#pragma once
#include <iostream>

class Board
{
private:
	char board[3][3];
	char winMark;
public:
public:
	Board();

	void Reset();
	void Display();

	void setPiece(char, int, int);
	char getPiece(int, int);
	char getWinMark();

	bool getHorizontal();
	bool getVertical();
	bool getDiagonal();

	bool isFull();
	bool isEmpty();
	bool isLegal(int, int);
};