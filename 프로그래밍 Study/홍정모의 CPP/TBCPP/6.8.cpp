#include <iostream>

using namespace std;

void printArray(int array[])
//void printArray(int *array[]) // ���Ʒ� ����
{
	cout << sizeof(array) << endl; //4
	cout << *array << endl;

	//�Լ� �ۿ����� �ٲ�
	*array = 100;
}

struct MyStruct
{
	int array2[5] = { 1, 2, 3, 4, 5 };
};

void doSomething(MyStruct *ms)
{
	cout << sizeof((*ms).array2) << endl;
}


int main()
{
	int array[5] = { 1, 2, 3, 4, 5 };

	cout << array[0] << " " << array[1] << endl;
	cout << array << endl; //pointer
	cout << &(array[0]) << endl;

	cout << *array << endl;

	char name[] = "king";
	cout << *name << endl;

	int* ptr = array;
	cout << ptr << endl;
	cout << *ptr << endl;
	cout << &ptr << endl;

	cout << sizeof(array) << endl; //20
	cout << sizeof(ptr) << endl; //4

	printArray(array);

	cout << array[0] << " " << *array << endl;

	//������ ����
	cout << *ptr << " " << *(ptr + 1) << endl;

	MyStruct ms;

	cout << ms.array2[0] << endl;

	doSomething(&ms);
	//array�� struct�� class�ȿ� ������� ���� �����ͷ� ���� ��ȯ�� �ȵ�

	return 0;
}