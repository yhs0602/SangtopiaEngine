#include "Player.h"

wchar_t * Player::getName()
{
	return name;
}

Player::Player(SangGame *game,wchar_t * name)
{
	this->game = game;
	this->name = _wcsdup(name);
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


