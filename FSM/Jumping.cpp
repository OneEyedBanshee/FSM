#include "Jumping.h"
#include "Idle.h"
#include "Climbing.h"

void Jumping::idle(Animation* a)
{
	cout << "Going from Jumping to Idling" << endl;
	a->setCurrent(new Idle());
	delete this;
}

void Jumping::climbing(Animation* a)
{
	cout << "Going from Jumping to Climbing" << endl;
	a->setCurrent(new Climbing());
	delete this;
}