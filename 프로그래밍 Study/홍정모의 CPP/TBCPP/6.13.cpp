#include <iostream>

using namespace std;

int main()
{
	//int value = 5;
	//int* ptr = &value;
	//*ptr = 6;

	//const int value2 = 5;
	//const int* ptr2 = &value;
	////*ptr2 = 6; //const�� �Ұ�

	//int value3 = 5;
	//const int* ptr3 = &value;
	//value = 6;

	////const �ּ� �ٲٱ� ����
	//int value4 = 6;
	//ptr = &value4;


	////�ּҸ� ���ٲ�
	//int value = 5;
	//int* const ptr = &value;
	//*ptr = 10;
	//cout << *ptr << endl;
	//
	//int value2 = 8;
	////ptr = &value2; //�Ұ�

	////��, �ּ� �� �� ���ٲ�
	//int value = 5;
	//const int* const ptr = &value;

	//����
	int value = 5;
	const int* ptr = &value;
	int* const ptr2 = &value;
	const int* const ptr3 = &value;



	return 0;
}