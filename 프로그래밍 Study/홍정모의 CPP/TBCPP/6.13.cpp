#include <iostream>

using namespace std;

int main()
{
	//int value = 5;
	//int* ptr = &value;
	//*ptr = 6;

	//const int value2 = 5;
	//const int* ptr2 = &value;
	////*ptr2 = 6; //const라서 불가

	//int value3 = 5;
	//const int* ptr3 = &value;
	//value = 6;

	////const 주소 바꾸기 가능
	//int value4 = 6;
	//ptr = &value4;


	////주소를 못바꿈
	//int value = 5;
	//int* const ptr = &value;
	//*ptr = 10;
	//cout << *ptr << endl;
	//
	//int value2 = 8;
	////ptr = &value2; //불가

	////값, 주소 둘 다 못바꿈
	//int value = 5;
	//const int* const ptr = &value;

	//정리
	int value = 5;
	const int* ptr = &value;
	int* const ptr2 = &value;
	const int* const ptr3 = &value;



	return 0;
}