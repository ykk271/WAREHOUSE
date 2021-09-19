#include <iostream>
#include <string>
using namespace std;

class Something
{
public:
	int m_value = 0;

	void setValue(int value) { m_value = value; }
	int getValue()  { return m_value; }
	int getValue() const
	{ 
		return m_value; 
	}
	
	//copy contructor 
	Something(const Something& st_in)
	{
		m_value = st_in.m_value;
		cout << "copy contructor " << endl;
	}

	Something()	{
		
		cout << "Constuctor" << endl;
	}

	string m_value1 = "default";

	const string& getValue1() const 
	{
		cout << "const ver" << endl;
		return m_value1;
	}
	string& getValue1() 
	{ 
		cout << "non const ver" << endl;
		return m_value1; 
	}

};

//Ư���� ��찡 �ƴϸ� const ���°� ����
void print(const Something &st)
{
	cout << &st << endl;

	cout << st.m_value << endl;
}



int main()
{
	Something something;
	//����	(const��)
	//something.setValue(3);

	//������: ��� �Լ��� const�� �ƴ϶�
	//const ���̸� ����
	//cout << something.getValue() << endl;

	print(something);

	cout << &something << endl;
	
	cout << "===�����ε�====" << endl;

	something.getValue1();

	const Something something2;
	something2.getValue1(); //return�� ���� �Ұ�


	return 0;
}