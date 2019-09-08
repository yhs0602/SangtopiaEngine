#pragma once
#include "Parameter.h"
#include "Coord.h"
#include <functional>
#include <vector>
class Path : public Parameter
{
public:
	Path();
	~Path();
	void Append(Coord *c);
	const std::vector<Coord *> getCoords();
	//Coord ** coords;
	//void FilterAndAdd(Coord* center, std::function<bool(Coord *)> filter, int depth = 1);
private:
	std::vector<Coord *> coords;
	
};

