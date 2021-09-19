#include <iostream>

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	//friend Cents operator + (const Cents& c1, const Cents& c2)
	//{
	//	return Cents(c1.getCents() + c2.getCents());
	//}
	//
	Cents operator + (const Cents& c2)
	{
		return Cents(this -> m_cents + c2.m_cents);
	}


};

//Cents operator + (const Cents& c1, const Cents& c2)

int main()
{
	Cents cents1(6);
	Cents cents2(8);

	Cents sum;
	//add(cents1, cents2, sum);

	cout << (cents1 + cents2 + Cents(6)+ Cents(10)+Cents(10)).getCents() << endl;

	// ?: :: sizeof . .* 오버로딩 안댐
	
	//멤버로만 오버로딩 해야되는 연산자
	// =. [], (), ->

	return 0;

}