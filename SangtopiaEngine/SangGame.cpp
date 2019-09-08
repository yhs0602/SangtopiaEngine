#include "SangGame.h"

SangGame * SangGame::game;

SangGame::SangGame(wchar_t *  name, int w, int h, int players)
{
	this->name = name;
	this->width = w;
	this->height = h;
	this->players = new Player*[players];
	for (int i = 0; i < players; i++)
	{
		this->players[i] = NULL;
	}
	this->terrains = new Terrain**[w];
	for (int i = 0; i < w; ++i) {
		terrains[i] = new Terrain*[h];
	}
	// Null out the pointers contained in the array:
	for (int i = 0; i < w; ++i) {
		for (int j = 0; j < h; ++j) {
			terrains[i][j] = new Terrain();
		}
	}

}


SangGame::~SangGame()
{
	// Null out the pointers contained in the array:
	for (int i = 0; i < width; ++i) {
		for (int j = 0; j < height; ++j) {
			delete terrains[i][j];
		}
	}
	for (int i = 0; i < width; ++i) {
		delete[] terrains[i];
	}
	delete[] terrains;
}

void SangGame::AddAI(int slot, int difficulty)
{
	players[slot] = (Player *) new PlayerAI(this,difficulty);
}

void SangGame::FillActions(const std::vector<Action*>* actions)
{
	//입력을 받는다
	engine->getInputFunction()(actions);
}

SangGame * SangGame::getGame()
{
	return game;
}
