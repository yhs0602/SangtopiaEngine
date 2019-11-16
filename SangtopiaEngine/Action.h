#pragma once
//동사 부분과 매개 변수를 가진다.
// 주체: Parameter
// 
//주체도 가짐. Parameter Unit
// 이동: path			class Path
// 공격: from, to		class IAttackable, class IBeatable
// 건설: where, what	class Coord, class Overlay
// 파괴: where			class Coord
// 점령: who, where	    class ICapturable, class Construction	
// 
class Action
{
public:
	Action();
	~Action();
	//Parameter ** parameters;
	//int length;
	//Parameter *subject;

	enum ActionType
	{
		ACTION_MOVE,
		ACTION_ATTACK,
		ACTION_CONSTRUCT,
		ACTION_DESTROY,
		ACTION_CAPTURE
	};

	virtual void * Invoke()=0;
};

