#pragma once
class IBeatenable
{
public:
	IBeatenable();
	virtual ~IBeatenable();
	virtual bool OnBeaten() = 0;
};

