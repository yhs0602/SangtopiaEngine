#include "SangtopiaEngine.h"



SangtopiaEngine::SangtopiaEngine()
{

}


SangtopiaEngine::~SangtopiaEngine()
{
}

SangGame * SangtopiaEngine::NewGame(wchar_t * name, int w, int h, int p, int ais)
{
	SangGame * game = new SangGame(name, w, h, p, ais);
	return game;
}

void(*SangtopiaEngine::getInputFunction())(const std::vector<Action*>* actions)
{
	return this->getInput;
}
