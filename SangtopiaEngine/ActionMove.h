#pragma once
#include "Action.h"
#include "Path.h"
#include "Unit.h"
class ActionMove :
	public Action
{
public:
	ActionMove(Unit * unit,Path * path);
	~ActionMove();
	void * Invoke();
private:
	Unit * subject;
	Path * path;
};

