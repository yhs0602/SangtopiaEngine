#include "SangtopiaEngine.h"
#include "Player.h"
#include "PlayerAI.h"

#include <iostream>
// a test console program for Sangtopia Engine.
void InputFunc(Player * player, const std::vector<Action*> * actions);
void RenderFunc(SangGame * game);

int main()
{
	SangtopiaEngine engine;
	SangGame *game = engine.NewGame((wchar_t *)L"TestGame", 32, 32, 4, 1);
	game->AddPlayer(new Player(game, (wchar_t *)L"³ª"));
	game->AddPlayer(new Player(game, (wchar_t *)L"³ª2"));
	game->AddPlayer(new Player(game, (wchar_t *)L"³ª3"));
	game->AddPlayer((Player *)new PlayerAI(game, 1, (wchar_t*)L"AI1"));
	engine.setInputFunction(InputFunc);
	engine.setRenderer(RenderFunc);
	game->Start();
	
	system("pause");
	return 0;
}

//Input function
void InputFunc(Player * player,  const std::vector<Action*> * actions)
{
	std::cout << "Player turn: "<<player->getName();
}

//Render the game on the screen
void RenderFunc(SangGame * game)
{

}