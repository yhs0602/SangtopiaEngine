#pragma once
#include "SangtopiaEngine.h"
#include "Player.h"
#include "PlayerAI.h"
#include "Terrain.h"
#include "Unit.h"
class SangGame
{
public:
	SangGame(wchar_t * name, int w, int h, int players);
	~SangGame();
	void AddAI(int slot, int difficulty);
	void FillActions(const std::vector<Action *> *actions);
	static SangGame * getGame();
	SangtopiaEngine * getEngine();
private:
	SangtopiaEngine * engine;
	Player ** players;
	wchar_t * name;
	int width;
	int height;
	Terrain *** terrains;
	std::vector<Unit *> units;
	static SangGame * game;
};

