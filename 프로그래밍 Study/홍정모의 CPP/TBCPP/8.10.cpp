#include <iostream>
using namespace std;

class Something
{
public:
	//static const int s_value = 1;
	//static int s_value = 1;
	
	//컴파일타임에 확실히 결정되어야 함
	static constexpr int s_value = 1; // 싱글턴? 애서 쓰임

};

//int Something::s_value = 1;

int main()
{
	cout << &Something::s_value << Something::s_value << endl;

	Something st1;
	Something st2;

	//st1.s_value = 2;

	cout << &st1.s_value << " " << st1.s_value << endl;
	cout << &st2.s_value << " " << st2.s_value << endl;

	//Something::s_value = 1024;

	return 0;
}