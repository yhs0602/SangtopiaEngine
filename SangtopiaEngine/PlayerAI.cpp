#include "PlayerAI.h"



PlayerAI::PlayerAI(SangGame * game, int difficulty):Player(game,L"AI")
{
	this->difficulty = difficulty;
}


PlayerAI::~PlayerAI()
{
}
