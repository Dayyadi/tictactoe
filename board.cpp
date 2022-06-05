#include "board.h"
#include <iostream>

using namespace std;

Board::Board()
{
	this->Reset();
}
void Board::Reset()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void Board::Display()
{
	cout << endl << "      (0)  (1)  (2)  ";
	cout << endl << "    -----------------";
	cout << endl << "(0) { " << getPiece(0, 0) << "  |" << "| " << getPiece(0, 1) << " |" << "| " << getPiece(0, 2) << " }";
	cout << endl << "(1) { " << getPiece(1, 0) << "  |" << "| " << getPiece(1, 1) << " |" << "| " << getPiece(1, 2) << " }";
	cout << endl << "(2) { " << getPiece(2, 0) << "  |" << "| " << getPiece(2, 1) << " |" << "| " << getPiece(2, 2) << " }";
	cout << endl << "    -----------------";
	cout << endl;
}

void Board::setPiece(char mark, int x, int y)
{
	board[x][y] = mark;
}

char Board::getPiece(int x, int y)
{
	char tempMark;
	tempMark = board[x][y];

	return tempMark;
}

char Board::getWinMark()
{
	return winMark;
}

bool Board::getHorizontal()
{
	bool retVal = false;
	for (int i = 0; i < 3; i++)
	{
		if (getPiece(i, 0) == getPiece(i, 1) && getPiece(i, 0) == getPiece(i, 2))
		{
			winMark = getPiece(i, 0);
			if (winMark != ' ')
			{
				retVal = true;
			}
		}
	}

	return retVal;
}

bool Board::getVertical()
{
	bool retVal = false;
	for (int i = 0; i < 3; i++)
	{
		if (getPiece(1, i) == getPiece(2, i) && getPiece(0, i) == getPiece(2, i))
		{
			winMark = getPiece(1, i);
			if (winMark != ' ')
			{
				retVal = true;
			}
		}
	}

	return retVal;
}

bool Board::getDiagonal()
{
	bool retVal = false;
	if (getPiece(0, 0) == getPiece(1, 1) && getPiece(0, 0) == getPiece(2, 2))
	{
		winMark = getPiece(0, 0);
		if (winMark != ' ')
		{
			retVal = true;
		}
	}

	if (getPiece(0, 2) == getPiece(1, 1) && getPiece(0, 2) == getPiece(2, 0))
	{
		winMark = getPiece(0, 2);
		if (winMark != ' ')
		{
			retVal = true;
		}
	}

	return retVal;

}

bool Board::isFull()
{
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] == ' ')
			{
				count++;
			}
		}
	}

	if (count >= 1)
		return false;
	else
		return true;
}

bool Board::isEmpty()
{
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] != ' ')
			{
				count++;
			}
		}
	}

	if (count >= 1)
		return false;
	else
		return true;
}

bool Board::isLegal(int x, int y)
{
	if (board[x][y] == ' ')
		return true;
	else
		return false;
}