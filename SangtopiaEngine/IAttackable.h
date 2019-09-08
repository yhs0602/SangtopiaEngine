#pragma once
#include "IBeatenable.h"
class IAttackable
{
public:
	IAttackable();
	virtual ~IAttackable();
	virtual void Attack(IBeatenable *to) = 0;
};

