#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	int m_id;
	string m_name;

public:
	//����
	Student(const string& name_in) // ���ӻ�����
		//: m_id(5), m_name(name_in)//����
		:Student(6, name_in) 
	{
		init(0, name_in); // �и�ȭ�ϴ°��� ��õ�ϱ⵵ ��
	}


	Student(const int& id_in, const string& name_in)
		: m_id (id_in), m_name(name_in)
	{}

	void init(const int& id_in, const string& name_in)
	{
		m_id = id_in;
		m_name = name_in;
	}

	void print()
	{
		cout << m_id << " " << m_name << endl;
	}
};

int main()
{
	Student st1(0, "KING");
	st1.print();


	Student st2("RING");
	st2.print();

	return 0;
}