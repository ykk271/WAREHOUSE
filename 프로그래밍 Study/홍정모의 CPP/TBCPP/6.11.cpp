#include<iostream>

using namespace std;

int main()
{
	//int array[10000000]; // stack --> �뷮 ����

	int var;
	var = 7;

	int* ptr = new int;
	*ptr = 7;
	//int *ptr = new int{7};


	cout << ptr << endl;
	cout << *ptr << endl;

	delete ptr;
	ptr = nullptr;

	cout << "Aftre delete" << endl;
	
	if (ptr != nullptr)
	{
		cout << ptr << endl;
		cout << *ptr << endl; // ��� �ȵ�
	}

	//���� �߻� ����
	int* ptr2 = new(std::nothrow) int{ 7 };
	//�޸𸮰� ���ٸ� null�� ����

	int* ptr3 = ptr2;

	delete ptr;
	ptr = nullptr;
	//ptr2 = nullptr; //���� �� ����°� ���� ��
	
	//�޸� ����
	while (true)
	{
		int* ptr = new int;
		cout << ptr << endl;

		delete ptr; //������ ������ �޸� ����
	}
	//new�� delete�� ����


	return 0;
}