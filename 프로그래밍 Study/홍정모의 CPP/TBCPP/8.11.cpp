#include <iostream>

using namespace std;

//이너클래스를 사용하면 static을 class 안에서 초기화 할 수 있다.
class Something
{
public:
	class _init
	{
	public:
		_init()
		{
			s_value = 9876;
		}
	};

private:
	static int s_value;
	int m_value;

	static _init s_initializer;

public:	
	Something()
		:m_value(123) //s_value = 1024 //static은 생성자에서 초기화 불가
	{}

public:
	static int getValue()
	{
		return s_value;//this를 못씀
	}

	int temp()
	{
		return this->s_value;
	}
};

int Something::s_value;
Something::_init Something::s_initializer;

int main()
{
	cout << Something::getValue() << endl;

	Something s1, s2;
	cout << s1.getValue() << endl;
	//cout << s1.s_value << endl;

	
	//어렵구만...
	int (Something::* fptr1)() = &Something::temp;

	cout << (s2.*fptr1)() << endl;

	int(* fptr2)() = &Something::getValue;

	cout << fptr2() << endl;


	return 0;
}

