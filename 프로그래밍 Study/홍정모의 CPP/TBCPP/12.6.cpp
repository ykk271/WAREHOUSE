#include <iostream>
using namespace std;

class B
{
public:
	virtual void func1() {};
	virtual void func2() {};
};

class D : public B
{
public:
	void func1() {};
	void func2() {};
};

int main()
{
	cout << sizeof(B) << endl;
	cout << sizeof(D) << endl;

	return 0;
}