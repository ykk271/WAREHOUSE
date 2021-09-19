#include <iostream>

using namespace std;

class Calc
{
private:
	int m_value;

public:
	Calc(int init_value)
		:m_value(init_value)
	{}
	
	Calc& add(int value) { m_value += value; return *this; }
	Calc& sub(int value) { m_value -= value; return *this; }
	Calc& mul(int value) { m_value *= value; return *this; }

	void print()
	{
		cout << m_value << endl;
	}
};

class Simple
{
private:
	int m_id;
public:
	Simple(int id)
	{
		this->setID(id);
		//this ->가 생략되어 있음
		this->m_id;
		cout << this << endl;
	}

	void setID(int id) { m_id = id; }
	int getID() { return m_id; }

};

int main()
{
	Simple s1(1), s2(2);
	s1.setID(2);
	s2.setID(4);

	cout << &s1 << " " << &s2 << endl;

	Calc cal(10);
	/*
	cal.add(10);
	cal.sub(1);
	cal.mul(2);
	cal.print();
	*/

	cal.add(10).sub(1).mul(2).print();

	return 0;
}