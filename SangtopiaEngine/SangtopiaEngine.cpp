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

void(*SangtopiaEngine::getInputFunction())(Player * player, const std::vector<Action*>* actions)
{
	return this->getInput;
}
void SangtopiaEngine::setInputFunction(void(*func)(Player * player, const std::vector<Action*>*actions))
{
	getInput = func;
}
void SangtopiaEngine::setRenderer(void(*func)(SangGame *game))
{
	Render = func;
}
#include <iostream>
void SangtopiaEngine::Warn(const char * t)
{
	std::cerr << "Warning:" <<t<< std::endl;
}
void SangtopiaEngine::Info(const char * t)
{
	std::cout << "Info:" << t << std::endl;
}

void SangtopiaEngine::refresh()
{
}
