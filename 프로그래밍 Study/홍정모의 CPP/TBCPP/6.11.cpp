#include<iostream>

using namespace std;

int main()
{
	//int array[10000000]; // stack --> 용량 작음

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
		cout << *ptr << endl; // 출력 안됨
	}

	//오류 발생 방지
	int* ptr2 = new(std::nothrow) int{ 7 };
	//메모리가 없다면 null을 넣음

	int* ptr3 = ptr2;

	delete ptr;
	ptr = nullptr;
	//ptr2 = nullptr; //각각 다 지우는게 좋긴 함
	
	//메모리 누수
	while (true)
	{
		int* ptr = new int;
		cout << ptr << endl;

		delete ptr; //지우지 않으면 메모리 누수
	}
	//new나 delete는 느림


	return 0;
}