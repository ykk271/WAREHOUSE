#include <iostream>
#ifndef __IntStack
#define __IntStack

using namespace std;

typedef struct {
	int max;
	int ptr;
	int* stk;
} IntStack;

int Initialize(IntStack* s, int max)
{
	s->ptr = 0;
	if (s->stk == new int(max) == NULL)
	{
		s->max = 0;
		return -1;
	}
	s->max = max;
	return 0;
}

int Push(IntStack* s, int x);

int Pop(IntStack* s, int* x);

int Peek(const IntStack* s, int* x);

void Clear(IntStack* s);

int Capacity(const IntStack* s);

int size(const IntStack* s);

int IsEmpty(const IntStack* s);

int Isfull(const IntStack* s);

int Search(const IntStack* s, int x);

int Print(const IntStack* s);

int Terminate(IntStack* s);

#endif

int main()
{


	return 0;
}