#include <iostream>

using namespace std;

class Fraction
{
private:
	int m_numerator;
	int m_denominator;

public:
	void print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}

	//생성자가 없으면 디폴트생성자가 숨어있음
	Fraction(const int& num_in, const int& den_in = 1) //생성자 
	{
		m_numerator = num_in;
		m_denominator = den_in;
	}

	//Fraction() //생성자 
	//{
	//	m_numerator = 1;
	//	m_denominator = 3;
	//}
};

class Second
{
public:
	Second()
	{
		cout << "class Second constructor()" << endl;
	}
};

class Frist
{
	Second sec;

public:
	Frist()
	{
		cout << "class Frist constructor()" << endl;
	}
};

int main()
{
	//Fraction frac; //생성자의 파라미터가 없으면 괄호 뺴버림
	
	//Fraction one_thrid{ 1, 3 }; // 타입 변환 불어	
	Fraction one_thrid(1.1, 3); // 타입 변환 허용

	one_thrid.print();
	cout << "====================" << endl;

	Frist fir;

	return 0;
}