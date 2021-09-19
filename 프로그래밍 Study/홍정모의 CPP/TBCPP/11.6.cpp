#include <iostream>
using namespace std;

class Base
{
protected:
	int m_value;

public:
	Base(int value)
		:m_value(value)
	{

	}
};

class Derived : public Base
{
public:
	Derived(int value)
		: Base(value)
	{

	}

	void setValue(int value)
	{
		Base::m_value = value;
		// DO SOME WORK WITH THE VARIABLES DEFINED IN DERIVED
	}
};

int main()
{
	return 0;
}