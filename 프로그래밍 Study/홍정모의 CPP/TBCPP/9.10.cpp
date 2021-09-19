#include <iostream>
#include <assert.h>
using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	Fraction(char) = delete; // char 안되게 막아버림

	explicit Fraction(int num = 0, int den = 1)
		:m_numerator(num), m_denominator(den)
	{
		assert(den != 0);
	}

	Fraction(const Fraction& fraction) //copyy constructor
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

void doSomthing(Fraction frac)
{
	cout << frac << endl;
}

int main()
{

	Fraction frac(7);

	doSomthing(Fraction(7));

	//doSomthing(7);//explicit 쓰면 작동 안됨

	//Fraction frac2('z'); // delete해서 작동 안됨


	return 0;
}