#include <iostream>
//�ǿ����� �鿡���� ���۷����� ������
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
//�Ʒ�ó�� ���ʿ��� �۾��ϴ� �뵵�� ����
void foo(const int * ptr, int* arr, int length)
{
	for (int i = 0; i < length; ++i)
	{
		cout << arr[i] << endl;
	}
	arr[0] = 1.0;
	*ptr;

	int x = 1;
	ptr = &x; //�����ϴ� �߰��� �ּҸ� �ٲٴ°� ���� ����
}

int main()
{
	int value = 5;

	cout << value << " " << &value << endl;

	int* ptr = &value;

	cout << &ptr << endl;
	//�ּҰ� ���� ��
	foo(ptr);
	foo(&value);
	//foo(5); //����

	double degrees = 30;
	double sin, cos;
	foo(degrees, &sin, &cos);

	cout << sin << " " << cos << endl;

	return 0;
}