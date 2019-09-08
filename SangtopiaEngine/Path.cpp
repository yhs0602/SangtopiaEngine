#include "Path.h"



Path::Path()
{
}


Path::~Path()
{
	
}

void Path::Append(Coord * c)
{
	coords.push_back(c);
}

const std::vector<Coord*> Path::getCoords()
{
	return coords;
}

/*
void Path::FilterAndAdd(Coord * center, std::function<bool(Coord*)> filter,int depth = 1)
{
	if (depth < 1)
		return;
	Coord * newCenter;
	
	//8개에 대해 돈다
	//조건만족-> 추가 & 추가탐색
	//아니면 패스
	Coord ** surrounds = center->getSurroundings();
	for (int i = 0; i < 8; i++)
	{
		newCenter = surrounds[i];
		if (filter(newCenter))
		{
			for (auto const& value : coords) {
				/* std::cout << value; ... *
			}
		}
	}
	if(depth>1)
		FilterAndAdd(newCenter, filter, depth - 1);

}
*/