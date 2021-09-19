#include <iostream>
#include <cassert>
using namespace std;

//결국 string 쓰면 되긴 함 

class MyString
{
public:
	//얕은 복사
	char* m_data = nullptr;
	int m_length = 0;

public:
	MyString(const char* source = "")
	{
		assert(source);

		m_length = std::strlen(source) + 1;
		m_data = new char[m_length];

		for (int i = 0; i < m_length; ++i)
			m_data[i] = source[i];

		m_data[m_length - 1] = '\0';		 
	}

	//깊은 복사
	MyString(const MyString& source)
	{
		cout << "Copy Constructor" << endl;

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];

			for (int i = 0; i < m_length; ++i)
				m_data[i] = source.m_data[i];
		}
		else
			m_data = nullptr;
	}

	//MyString(const MyString& source) = delete;
	//임시

	MyString& operator = (const MyString& source)
	{
		//shallow copy라면
		this->m_data = source.m_data;
		this->m_length = source.m_length;
		
		cout << "Assignment operator" << endl;

		if (this == &source) //prevent self-assignment
			return *this;
		
		delete[] m_data; // 가지고 있을 수도 있어서 가지고 있는걸 지워버림

		m_length = source.m_length;

		if (source.m_data != nullptr)
		{
			m_data = new char[m_length];
		}
	}


	~MyString()
	{
		delete[] m_data;
	}

	char* getString() { return m_data; }
	int getLength() { return m_length; }
};

int main()
{
	MyString hello("Hello");

	MyString str1(hello); //MyString str = hello;

	MyString str2;
	str2 = hello;


	//cout << (int*)hello.m_data << endl;
	//cout << hello.getString() << endl;

	//{
	//	MyString copy = hello;
	//	cout << (int*)copy.m_data << endl;
	//	cout << copy.getString() << endl;
	//}
	//
	//cout << hello.getString() << endl;



	return 0;
}