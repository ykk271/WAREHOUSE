#include <iostream>
using namespace std;

class Digit
{
private:
	int m_digit;
public:
	Digit(int digit = 0) : m_digit(digit){}

	//prefix
	Digit& operator ++ ()
	{
		++m_digit;

		return *this;
	}

	friend ostream& operator << (ostream & out, const Digit & d)
	{
		cout << d.m_digit;
		return out;
	}

	//post일때는 int같은걸 넣줘야함
	//postfix
	Digit operator ++ (int)
	{
		Digit temp(m_digit);

		++(*this);

		return temp;

	}
};

int main()
{
	int a = 10;

	cout << ++a << endl;
	cout << a << endl;
	cout << a++ << endl;
	cout << a << endl;

	Digit d(5);
	cout << ++d << endl;
	cout << d << endl;

	cout << d++ << endl;
	cout << d << endl;



	return 0;
}