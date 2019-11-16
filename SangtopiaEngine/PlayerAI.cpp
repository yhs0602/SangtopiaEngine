#include "PlayerAI.h"



PlayerAI::PlayerAI(SangGame * game, int difficulty, wchar_t * name):Player(game,name)
{
	this->difficulty = difficulty;
}


PlayerAI::~PlayerAI()
{
}
