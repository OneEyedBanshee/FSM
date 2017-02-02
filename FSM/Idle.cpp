#include "Idle.h"
#include "Jumping.h"
#include "Climbing.h"

void Idle::jumping(Animation* a)
{
	cout << "Going from Idling to Jumping" << endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Idle::climbing(Animation* a)
{
	cout << "Goind from Idling to Climbing" << endl;
	a->setCurrent(new Climbing());
	delete this;
}