#include <iostream>
using namespace std;

class Mother // generalized class
{
private:
	int m_i;
//protected:
	int m_i2;

public:
	Mother()
		:m_i(0)
	{}

	Mother(const int& i_in)
		: m_i(i_in)
	{
		std::cout << "Mother constructor" << std::endl;
	}

	void setValue(const int& i_in)
	{
		m_i = i_in;
	}

	int getValue()
	{
		return m_i;
	}
};

class Child : public Mother
{
private:
	double m_d;

public:


	Child(const int& i_in, const double& d_in) 
		//: m_i(i_in), m_d(d_in) //�޸𸮰� �Ҵ�Ǳ� ���� ����ǹǷ� ������� ����
		:Mother(i_in), m_d(d_in)
	{
		//Mother::setValue(i_in);
		//m_d = d_in;
	}

	void setValue(const int& i_in, const double& d_in)
	{
		//m_i = i_in; // private�� ���� ����
		//m_i2 = i_in; // protected�� ����
		//Mother::setValue(i_in); //��ó���� ����
	}

	void setValue(const double& d_in)
	{
		m_d = d_in;
	}

	double getValue()
	{
		return m_d;
	}
};

class Daughter : public Child
{

};

int main()
{
	Mother mother(1024);
	//mother.setValue(1024);
	cout << mother.getValue() << endl;

	Child child(1024, 128);
	//child.setValue(128.012);
	//child.Mother::setValue(1234);
	cout << child.Mother::getValue() << endl;
	cout << child.getValue() << endl;


	return 0;
}