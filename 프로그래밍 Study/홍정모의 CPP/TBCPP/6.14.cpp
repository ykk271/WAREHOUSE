#include<iostream>

using namespace std;

void doSomething(int &n)
{
	n = 10; // const로 받으면 오류뜸
	cout << "In doSomeThing" << n << endl;
}

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};


int main()
{
	int value = 5;
	
	
	int* ptr = nullptr;
	ptr = &value;
	
	//ref는 반드시 초기화 되어야 한다
	//literal은 못들어감
	//const는 못들어감
	int& ref = value;
		
	
	ref = 10; //*ptr = 10;

	cout << value << " " << ref << endl;

	cout << &value << endl;
	cout << &ref << endl;
	cout << ptr << endl;
	cout << &ptr << endl;


	int value1 = 5;
	int value2 = 10;

	int& ref1 = value1;
	cout << ref1 << endl;
	ref1 = value2;
	cout << ref1 << endl;

	//주소 공유하기 때문에 함수에서도 값을 바꿀 수 있음
	int n = 5;
	cout << n << endl;
	cout << &n << endl;
	doSomething(n);
	cout << n << endl;

	int arr[5] = { 1, 2, 3, 4, 5 };


	Other ot;
	//많이 들어가니깐 다루기 어려움
	//ot.st.v1 = 1.0;
	//아래처럼 가능
	int& v1 = ot.st.v1;
	v1 = 1;

	int V = 5;	
	//아래 두개 기능 동일
	int* const P = &V;
	int& R = V;

	return 0;
}