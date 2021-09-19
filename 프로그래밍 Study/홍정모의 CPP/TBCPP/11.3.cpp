#include <iostream>

using namespace std;

class Mother
{
public:
	int m_i;

	Mother(const int & i_in = 0)
		:m_i(1)
	{
		cout << "Mother construction" << endl;
	}
};

class Child : public Mother
{
public:
	double m_d;

public:
	Child()
		//:m_i(1024) //생성자에서는 안됨
		:m_d(1.0)
	{
		cout << "Child construction" << endl;
		//this->m_i = 10;
		//Mother::m_i = 1024;
	}
};

///////////////////////////////////////

class A
{
public:
	A()
	{
		cout << "A" << endl;
	}
};

class B : public A
{
public:
	B()
	{
		cout << "B" << endl;
	}
};

class C : public B
{
public:
	C()
	{
		cout << "C" << endl;
	}
};

int main()
{
	Child cl;

	C c;

	return 0;
}