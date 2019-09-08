#include "ActionMove.h"



ActionMove::ActionMove(Unit * unit, Path * path)
{
	this->subject = unit;
	this->path = path;
}


ActionMove::~ActionMove()
{
}

void * ActionMove::Invoke()
{
	//path를 따라 unit의 좌표를 바꾸며 각 지역에 지나감 등을 호출하며, 출력한다.
	std::vector<Coord*> coords = path->getCoords();
	for (auto const& coord : coords) {
		subject->MoveTo(coord);		//MoveTo updates coord, invokes the target and oirinal place
		SangGame::getGame()->getEngine()->refresh();
	}

}
