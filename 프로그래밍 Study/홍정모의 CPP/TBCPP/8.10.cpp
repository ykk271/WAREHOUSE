#include <iostream>
using namespace std;

class Something
{
public:
	//static const int s_value = 1;
	//static int s_value = 1;
	
	//������Ÿ�ӿ� Ȯ���� �����Ǿ�� ��
	static constexpr int s_value = 1; // �̱���? �ּ� ����

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