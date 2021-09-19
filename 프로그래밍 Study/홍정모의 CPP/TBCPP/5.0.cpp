#include<iostream>
#include<string>

using namespace std;

struct person
{
	//각각을 멤버라고 부름
	double height; // double height[100];
	float  weight; // double weight[100];
	int age;
	string name = "KING"; //디폴트 초기화


	//구조체 안에 함수를 넣어버릴 수 있음
	void print()
	{
		cout << height << " " << weight << " " << age << " " << name;
	}

};


//구조체 안에 구조체
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

	//예전방식 초기화
	me.age = 20;
	me.name = "jeck";
	me.height = 2;
	me.weight = 100;

	//최근방식 초기화
	person you{ 2.0, 100.0, 20, "kim" };

	//printperson(you);

	person you2{ 3.0, 100.0, 20, "kim" };

	you.print();
	you2.print();

	//you = you2
	//대입연산자는 의도치 않게 작동할 수 있음

	cout << "=========================" << endl;


	person king;
	cout << king.name;

	Employee emp1;

	//메모리가 더 크게나올 수 있음 ==> padding이라고 부름
	cout << sizeof(Employee) << endl;



	return 0;
}
