#include <iostream>
//실용적인 면에서는 레퍼런스가 좋긴함
using namespace std;

void foo(int* ptr)
{
	cout << *ptr << " " << ptr << " " << &ptr << endl;	
}

void foo(double degrees, double *sin_out, double *cos_out)
{
	*sin_out = 1.0;
	*cos_out = 2.0;

}
//아래처럼 안쪽에서 작업하는 용도로 쓰임
void foo(const int * ptr, int* arr, int length)
{
	for (int i = 0; i < length; ++i)
	{
		cout << arr[i] << endl;
	}
	arr[0] = 1.0;
	*ptr;

	int x = 1;
	ptr = &x; //구현하는 중간에 주소를 바꾸는건 좋지 않음
}

int main()
{
	int value = 5;

	cout << value << " " << &value << endl;

	int* ptr = &value;

	cout << &ptr << endl;
	//주소값 복사 됨
	foo(ptr);
	foo(&value);
	//foo(5); //오류

	double degrees = 30;
	double sin, cos;
	foo(degrees, &sin, &cos);

	cout << sin << " " << cos << endl;

	return 0;
}