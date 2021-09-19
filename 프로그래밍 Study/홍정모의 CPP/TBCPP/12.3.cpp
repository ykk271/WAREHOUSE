#include <iostream>
using namespace std;

class A
{
public:
	//void print(int x) { cout << "A" << endl; }
	
	//override ���ϰ� ���ƹ���
	//virtual void final print(int x) { cout << "A" << endl; }

	void print(){ cout << "A" << endl; }
	virtual A* getThis() 
	{
		cout << "A::getThis()" << endl;
		return this;
	}
};

class B : public A
{
public:
	//void print(short x) { cout << "B" << endl; }
	
	//�Ǽ� ���� ����
	//void print(short x) override { cout << "B" << endl; }	

	void print(){ cout << "B" << endl; }
	virtual B* getThis()
	{ 
		cout << "B::getThis()" << endl;
		return this;
	}
};

class C : public B
{
public:
	void print(short x) { cout << "C" << endl; }
};

int main()
{
	A a;
	B b;
	C c;

	A& ref = b;
	//ref.print(1); //�Ķ���� �ٸ��� overriding �Ұ�

	b.getThis()->print();
	ref.getThis()->print();

	cout << typeid(b.getThis()).name() << endl;
	cout << typeid(ref.getThis()).name() << endl;
}