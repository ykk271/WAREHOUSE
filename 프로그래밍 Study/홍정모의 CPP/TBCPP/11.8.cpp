#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class Base
{
protected:
	int m_i;

public:
	Base(int value)
		:m_i(value)
	{}

	void print()
	{
		cout << "KKK" << endl;
	}


};

class Derived : public Base
{
private:
	double m_d;

public:
	Derived(int value)
		: Base(value)
	{}

	void setValue(int value)
	{
		Base::m_i = value;
	}

	using Base::m_i; // main���� protected�� public���� �ٱ���

private:
	using Base::print; // print�� main���� ������ ���ƹ���
	
private:
	void print() = delete; //���������� �ڽĿ����� ���� �Ұ������� �θ𿡼��� ����!

};

int main()
{
	Base base(5);

	Derived derived(7);

	derived.m_i = 1024; //protect�� main���� ���� �Ұ�
	//derived.print();
	base.print();
	

	return 0;
}