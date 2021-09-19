#include <iostream>
using namespace std;

class A
{
public:
	//안헷갈리도록 하위클레스에도 virtual 쓰면 좋음
	//virtual쓰면 성능 떨어짐
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
	//int print() { cout << "D" << endl; return 0; } //오류
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
		 
	//가장 상위 클레스가 vitual이면 아래도 다 vitual로 행동
	B& ref = c;
	ref.print();

	

	return 0;
}