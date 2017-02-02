#include "Animation.h"
#include <thread>

using namespace std;

int main() {
	Animation fsm;
	int i = 0;

	while(true) 
	{
		if (i == 0)
		{
			fsm.jumping();
			this_thread::sleep_for(1s);
			i = rand() % 2 + 1;
		}
		else if (i == 1)
		{
			fsm.climbing();
			this_thread::sleep_for(1s);
			while (i == 1)
				i = rand() % 3;
		}
		else
		{
			fsm.idle();
			this_thread::sleep_for(1s);
			i = rand() % 2;
		}
	}
}