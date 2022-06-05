#pragma once
#include <string>
#include <iostream>

using namespace std;

class Player
{
	char mark;
	string name;
	int win;
public:
	Player();
	void setPlayerMark(char);
	char getPlayerMark();
	void updateState(Player);
	void setName();
	string getName();
	bool operator==(Player);

	void setWin(int);
	int getWin();
};