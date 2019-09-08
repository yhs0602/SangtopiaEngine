#pragma once
#include "SangGame.h"
#include <vector>
#include "Action.h"

class Player
{
public:
	Player(SangGame * game, const wchar_t * name);
	~Player();
	std::vector<Action *> *NextActions();
private:
	wchar_t * name;
	SangGame * game;
};

