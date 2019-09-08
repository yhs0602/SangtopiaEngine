#include "Player.h"



Player::Player(SangGame *game,wchar_t * name)
{
	this->game = game;
	this->name = name;
}


Player::~Player()
{
}

std::vector<Action*> *Player::NextActions()
{
	std::vector<Action*> *actions = new std::vector<Action*>();
	game->FillActions(actions);
	return actions;
}


