#include <iostream>

using namespace std;

struct Something
{
	int a, b, c; 
};


int main()
{
	int x = 5;
	

	cout << x << endl;
	cout << &x << endl; // & : adrees of operator
	cout << (int)&x << endl;

	//de reference operator (*)
	cout << *(&x) << endl;

	int *ptr_x;
	ptr_x = &x;

	cout << ptr_x << endl;
	cout << *ptr_x << endl;


	double d = 1.0;
	double* ptr_y = &d;
	
	cout << ptr_y << endl;
	cout << *ptr_y << endl;

	//�ٸ� �����Ϸ������� �ٸ��� ���� �� ����
	cout << typeid(ptr_x).name() << endl;

	cout << "&:" << sizeof(&x) << endl;
	//�ּҴ� double�̳� int�� ũ�� ����
	//64��Ʈ������ �� ũ�� ����

	Something ss;
	Something* ptr_s;
	cout << sizeof(Something) << endl;	//12
	cout << sizeof(ptr_s) << endl;		//4

	////////////////////////////////////////////////


	return 0;
}