#include "SangGame.h"
#include "PlayerAI.h"
#include "Terrain.h"
#include "SangtopiaEngine.h"

SangGame * SangGame::game;

SangGame::SangGame(wchar_t *  name, int w, int h, int players,int ais)
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
	for (int i = 0; i < w; ++i) {
		for (int j = 0; j < h; ++j) {
			terrains[i][j] = new Terrain();
		}
	}
	numplayers = players;
	player_last = 0;
	currentPlayer = 0;
	game = this;
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

void SangGame::AddPlayer(Player * player)
{
	if (player_last == numplayers)
	{
		SangtopiaEngine::Warn("attempted to add more than numps");
		return;
	}
	players[player_last] = player;
	player_last++;
}

void SangGame::FillActions(const std::vector<Action*>* actions)
{
	//입력을 받는다
	engine->getInputFunction()(players[currentPlayer], actions);
}


SangGame * SangGame::getGame()
{
	return game;
}

SangtopiaEngine * SangGame::getEngine()
{
	return nullptr;
}

//Freeze inputs and generate terrains, set spawn points. etc.
void SangGame::Start()
{
	SangtopiaEngine::Info("Game started");
}
