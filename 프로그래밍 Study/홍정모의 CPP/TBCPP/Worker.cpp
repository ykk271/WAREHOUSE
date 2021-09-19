#include "Worker.h"

void Worker::Do()
{
	Timer timer; //start timer

	while (1)
	{
		N++;

		if (N > 1000000)
			break;
	}
	//work here

	timer.elapsed(); //end timer and report elapse time
}
