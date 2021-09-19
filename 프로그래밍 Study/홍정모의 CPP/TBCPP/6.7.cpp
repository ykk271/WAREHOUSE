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

	//다른 컴파일러에서는 다르게 나올 수 있음
	cout << typeid(ptr_x).name() << endl;

	cout << "&:" << sizeof(&x) << endl;
	//주소는 double이나 int나 크기 같음
	//64비트에서는 더 크게 나옴

	Something ss;
	Something* ptr_s;
	cout << sizeof(Something) << endl;	//12
	cout << sizeof(ptr_s) << endl;		//4

	////////////////////////////////////////////////


	return 0;
}