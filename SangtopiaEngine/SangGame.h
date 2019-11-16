#pragma once
#include <vector>

class Action;
class SangtopiaEngine;
class Player;
class Terrain;
class Unit;
class PlayerAI;
class Unit;


class SangGame
{
public:
	SangGame(wchar_t * name, int w, int h, int players, int ais);
	~SangGame();
	void AddAI(int slot, int difficulty);
	void AddPlayer(Player * player);
	void FillActions(const std::vector<Action *> *actions);
	static SangGame * getGame();
	SangtopiaEngine * getEngine();
	void Start();
private:
	SangtopiaEngine * engine;
	Player ** players;
	wchar_t * name;
	int width;
	int height;
	Terrain *** terrains;
	std::vector<Unit *> units;
	static SangGame * game;
	int player_last;
	int numplayers;
	int currentPlayer;
};

