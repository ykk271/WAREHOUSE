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

//특별한 경우가 아니면 const 쓰는게 좋음
void print(const Something &st)
{
	cout << &st << endl;

	cout << st.m_value << endl;
}



int main()
{
	Something something;
	//에라남	(const라서)
	//something.setValue(3);

	//에러남: 멤버 함수가 const가 아니라서
	//const 붙이면 가능
	//cout << something.getValue() << endl;

	print(something);

	cout << &something << endl;
	
	cout << "===오버로딩====" << endl;

	something.getValue1();

	const Something something2;
	something2.getValue1(); //return값 변경 불가


	return 0;
}