#pragma once
#include "Board.h"
#include "Player.h"
#include <iostream>
#include <string>

class GameManager
{
	Player player_1;
	Player player_2;
	Board board;

	Player player_win;
	Player player_turn;
	int turnCount = 1;

	bool isWin = false;
	bool isDraw = false;

public:
	GameManager();
	bool checkWin();
	void switchTurn();
	void makeMove();
	void announce();
	void newGame();
};