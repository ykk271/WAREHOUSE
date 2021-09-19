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

	using Base::m_i; // main에서 protected를 public으로 바까줌

private:
	using Base::print; // print를 main에서 못쓰게 막아벌임
	
private:
	void print() = delete; //지워버리면 자식에서는 접근 불가하지만 부모에서는 가능!

};

int main()
{
	Base base(5);

	Derived derived(7);

	derived.m_i = 1024; //protect라 main에서 접근 불가
	//derived.print();
	base.print();
	

	return 0;
}