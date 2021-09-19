#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class Base
{
protected:
	int m_value;

public:
	Base(int value)
		:m_value(value)
	{}

	void print()
	{
		cout << "I'm base" << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Base& b)
	{
		cout << "This is base output" << endl;
		return out;
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
	}

	void print()
	{
		Base::print();
		cout << "I'm derived" << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Derived& b)
	{
		cout << static_cast<Base>(b);
		cout << "This is derived output" << endl;
		return out;
	}

};

int main()
{
	Base base(5);
	base.print();
	
	Derived derived(7);
	derived.print();

	cout << base;
	cout << derived;

	return 0;
}