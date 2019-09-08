#pragma once
class Coord
{
public:
	Coord();
	~Coord();
	friend bool operator ==(Coord& a, Coord& b)
	{
		bool rVal = true;
		rVal &= a.x == b.x;
		rVal &= a.y == b.y;
		rVal &= a.z == b.z;
		return rVal;
	}
	int x, y, z;
};

