#include <iostream>

using namespace std;

int main()
{
	double value = 7;
	double* ptr = &value;

	//4�� �̵� (int �� ��)
	cout << uintptr_t(ptr+1) << endl;
	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr-1) << endl;

	int array[] = { 1, 2, 3, 4, 5 };
	//�ּҰ� �̿��� ����
	cout << array[0] << " " << (uintptr_t) & array[0] << endl;
	cout << array[1] << " " << (uintptr_t) & array[1] << endl;
	
	int* ptr_array = array;

	for (int i = 0; i < 5; i++)
	{
		cout << *(ptr_array + i) << " " << (uintptr_t)(ptr + i) << endl;
	}

	char name[] = "KING KING";

	const int n_number = sizeof(name) / sizeof(name[0]);

	for (int i = 0; i < n_number; ++i)
	{
		cout << *(name + i);
	}

	return 0;
}