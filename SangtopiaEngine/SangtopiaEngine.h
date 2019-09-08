#pragma once

// 판 생성/로드, 저장, 업데이트, 조작 등.
// 한 판에 대해서만 한다.

#include "SangGame.h"
class SangtopiaEngine
{
public:
	SangtopiaEngine();
	~SangtopiaEngine();
	// 새 게임을 만든다. 게임의 이름, 판의 넓이, 사용자의 수, AI의 수
	SangGame * NewGame(wchar_t * name, int w, int h, int players, int ais);
	void(*getInputFunction())(const std::vector<Action*>* actions);
private:
	void(*getInput)(const std::vector<Action*>* actions);
};

