#pragma once

// 판 생성/로드, 저장, 업데이트, 조작 등.
// 한 판에 대해서만 한다.

#include "SangGame.h"
class SangGame;
class SangtopiaEngine
{
public:
	SangtopiaEngine();
	~SangtopiaEngine();
	// 새 게임을 만든다. 게임의 이름, 판의 넓이, 사용자의 수, AI의 수
	SangGame * NewGame(wchar_t * name, int w, int h, int players, int ais);
	void(*getInputFunction())(Player *player, const std::vector<Action*>* actions);
	void setInputFunction(void(*func)(Player * player, const std::vector<Action*>*actions));
	void setRenderer(void(*func)(SangGame * game));
	void refresh();
	static void Warn(const char * s);
	static void Info(const char * s);

private:
	void(*getInput)(Player * player, const std::vector<Action*>* actions);
	void(*Render)(SangGame * game);

};

