#pragma once
#include "Action.h"
#include "SangGame.h"
#include <vector>

class Player
{
public:
	Player(SangGame * game,  wchar_t * name);
	~Player();
	wchar_t * getName();
	std::vector<Action *> *NextActions();
private:
	wchar_t * name;
	SangGame * game;
};

