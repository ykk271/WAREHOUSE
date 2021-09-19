#include <iostream>
#include <assert.h>
using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(int num = 0, int den = 1)
		:m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}

	Fraction(const Fraction &fraction) //copyy constructor
		:m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
	{
		cout << "Copy constructor " << endl;
	}

	friend std::ostream& operator << (std::ostream& out, const Fraction& f)
	{
		out << f.m_numerator << " / " << f.m_denominator << endl;
		return out;
	}

};

Fraction doSomthing()
{
	Fraction temp(1, 2);
	cout << &temp << endl;
	return temp;
}

int main()
{
	Fraction frac(3, 5);

	//Fraction fr_copy(frac);

	//copy constructor�� private�� ������ �۵� �ȵ�
	Fraction fr_copy = frac;
	Fraction fr_copy2 (Fraction(3,10)); // �����Ϸ��� copy constructor ������

	cout << frac << " " << fr_copy << endl;

	cout << fr_copy2 << endl;


	Fraction result = doSomthing(); // ������϶��� copy constructor ������
	cout << &result << endl; //�������ϴ�� �ּ� ����
	cout << result << endl;

	return 0;
}