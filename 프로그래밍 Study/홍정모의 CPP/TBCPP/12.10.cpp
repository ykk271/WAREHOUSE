#include <iostream>
#include <string>
using namespace std;

class B
{
private:


public:
	int m_i = 0;

	virtual void print()
	{
		cout << "BASE" << endl;
	}

};

class D1 : public B
{
public:
	int m_j = 1;

	virtual void print() override
	{
		cout << "DERIVED 1" << endl;
	}
};

class D2 : public B
{
public:
	string m_name = "Dr. 2";

	virtual void print() override
	{
		cout << "DERIVED 2" << endl;
	}
};

int main()
{
	D1 d1;
	B* b = &d1;
	


	auto* base_to_d1 = dynamic_cast<D1*>(b);

	if (base_to_d1 == nullptr)
		cout << "Failed" << endl;

	cout << base_to_d1->m_j << endl;
	base_to_d1->m_j = 256;

	cout << d1.m_j << endl;

	return 0;
}