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

	//�����ڰ� ������ ����Ʈ�����ڰ� ��������
	Fraction(const int& num_in, const int& den_in = 1) //������ 
	{
		m_numerator = num_in;
		m_denominator = den_in;
	}

	//Fraction() //������ 
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
	//Fraction frac; //�������� �Ķ���Ͱ� ������ ��ȣ ������
	
	//Fraction one_thrid{ 1, 3 }; // Ÿ�� ��ȯ �Ҿ�	
	Fraction one_thrid(1.1, 3); // Ÿ�� ��ȯ ���

	one_thrid.print();
	cout << "====================" << endl;

	Frist fir;

	return 0;
}