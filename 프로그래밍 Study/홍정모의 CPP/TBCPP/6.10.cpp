#include <iostream>

using namespace std;

int main()
{
	//char name[] = "King King";

	const char* name = "King King";
	const char* name2 = "King King";
	//이름이 같으면 같은 메모리 주소
	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl;

	int int_arr[5] = { 1,2,3,4,5 };
	char char_arr[] = "Hello World!";
	const char* name3 = "Jeck Jeck";

	cout << int_arr << endl;
	cout << char_arr << endl; 
	cout << name3 << endl; //주소출력을 안함

	char c = 'Q';
	cout << &c << endl; //문자열로 착각함
	 

	return 0;
}