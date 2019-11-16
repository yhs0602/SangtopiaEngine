#pragma once
#include "Player.h"
class PlayerAI :
	protected Player
{
public:
	PlayerAI(SangGame * game, int difficulty,wchar_t * name = (wchar_t*)L"AI");
	~PlayerAI();
private:
	int difficulty;
};

