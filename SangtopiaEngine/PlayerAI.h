#pragma once
#include "Player.h"
class PlayerAI :
	protected Player
{
public:
	PlayerAI(SangGame * game, int difficulty);
	~PlayerAI();
private:
	int difficulty;
};

