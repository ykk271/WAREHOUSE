#include <iostream>
#include <cstddef>

using namespace std;

void doSomething(double* ptr)
{
	cout << "address of pointer varaible in doSomething" << &ptr << endl;

	if (ptr != nullptr)
	{
		//do something
		cout << *ptr << endl;
	}
	else
	{
		//do nothing
		cout << "Null ptr, do nothing" << endl;
	}
}

int main()
{
	double* ptr = 0; // c style;
	double* ptr2 = NULL;
	double* ptr3 = nullptr; /// modern c++
	double* ptr4{ nullptr };


	doSomething(ptr);
	doSomething(nullptr);

	double d = 123.4;
	doSomething(&d);

	ptr = &d;
	doSomething(ptr);

	std::nullptr_t nptr; //null ptr만 받을 수 있음

	cout << "address of pointer varaible in main()" << &ptr << endl;

	return 0;
}