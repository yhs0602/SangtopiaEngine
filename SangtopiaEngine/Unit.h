#pragma once
class Player;
class Coord;
class Unit
{
public:
	Unit();
	~Unit();
	int MoveTo(const Coord *coord);
private:
	Player * owner;

};

