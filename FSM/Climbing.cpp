#include "Climbing.h"
#include "Idle.h"
#include "Jumping.h"

void Climbing::idle(Animation* a)
{
	cout << "Going from Climbing to Idling" << endl;
	a->setCurrent(new Idle());
	delete this;
}

void Climbing::jumping(Animation* a)
{
	cout << "Going from Climbing to Jumping" << endl;
	a->setCurrent(new Jumping());
	delete this;
}