#include <iostream>
using namespace std;

class A
{
public:
	//���򰥸����� ����Ŭ�������� virtual ���� ����
	//virtual���� ���� ������
	virtual void print() { cout << "A" << endl; }
};

class B : public A
{
public:
	void print() { cout << "B" << endl; }
};

class C : public B
{
public:
	void print() { cout << "C" << endl; }
};

class D : public C
{
public:
	void print() { cout << "D" << endl; }
	//int print() { cout << "D" << endl; return 0; } //����
};

int main()
{
	A a;
	//a.print();

	B b;
	//b.print();

	C c;
	//c.print();

	D d;
	//d.print();
		 
	//���� ���� Ŭ������ vitual�̸� �Ʒ��� �� vitual�� �ൿ
	B& ref = c;
	ref.print();

	

	return 0;
}