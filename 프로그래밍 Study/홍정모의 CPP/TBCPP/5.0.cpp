#include<iostream>
#include<string>

using namespace std;

struct person
{
	//������ ������ �θ�
	double height; // double height[100];
	float  weight; // double weight[100];
	int age;
	string name = "KING"; //����Ʈ �ʱ�ȭ


	//����ü �ȿ� �Լ��� �־���� �� ����
	void print()
	{
		cout << height << " " << weight << " " << age << " " << name;
	}

};


//����ü �ȿ� ����ü
struct family
{
	person i, my, mine;
};


struct Employee
{
	short id; //2 bytes
	int age; //4 bytes
	double wage; // 8bytes

	//2+4+8 = 14
};


//void printperson(person P)
//{
//	cout << P.height << " " << P.weight << " " << P.age << " " << P.name;
//}

int main()
{
	person me;
	//person you;
	person he;

	//������� �ʱ�ȭ
	me.age = 20;
	me.name = "jeck";
	me.height = 2;
	me.weight = 100;

	//�ֱٹ�� �ʱ�ȭ
	person you{ 2.0, 100.0, 20, "kim" };

	//printperson(you);

	person you2{ 3.0, 100.0, 20, "kim" };

	you.print();
	you2.print();

	//you = you2
	//���Կ����ڴ� �ǵ�ġ �ʰ� �۵��� �� ����

	cout << "=========================" << endl;


	person king;
	cout << king.name;

	Employee emp1;

	//�޸𸮰� �� ũ�Գ��� �� ���� ==> padding�̶�� �θ�
	cout << sizeof(Employee) << endl;



	return 0;
}
