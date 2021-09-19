#include <iostream>

using namespace std;

class A; // forward declaration

class B
{
private:
	int m_value = 2;

	friend void doSomething(A& a, B& b);
public:
	void Do(A& a)
	{
		cout << m_value << endl;
	}
};


class A
{
private:
	int m_value = 1;

	friend void doSomething(A& a, B& b);
	//friend class B; //전체 다 열어줌
	friend void B::Do(A& a); //일부 멤버함수에게만 열어줌
};



void doSomething(A& a, B& b)
{
	cout << a.m_value << " "<< b.m_value << endl;
}


int main()
{
	A a;
	B b;
	doSomething(a, b);
	b.Do(a); 
}