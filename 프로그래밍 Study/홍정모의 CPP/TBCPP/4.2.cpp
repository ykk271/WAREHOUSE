#include <iostream>
#include "My_Constant.h"
using namespace std;

/*
int g_x; // external linkage
static int g_x; // internal linkage
const int g_x; // X

다른 cpp파일에 전역변수가 있을 떄
extern int g_z;
extern const int g_z;

int g_y(1);
static int g_y(1);
const int g_y(1);

다른 cpp파일로 적용 가능
extern int g_w(1);
상수, 다른 cpp파일로 적용 가능
extern const int g_w(1);
*/





int value = 123;

int a = 1;

static int g_a = 1; // 다른 cpp파일에서는 접근 불가

//forward declaration
extern void Do2(); 
extern void Do3();
extern int c;


void Do()
{
	//static int a = 1; //정적할당 
	//초기화 1번밖에 안함
	//a가 무조건 초기화 돼야함
	//함수가 몇번 호출됐는지 세어볼 때 좋음
	++a;
	cout << a << endl;
}


int main()
{
	cout << value << endl;
	
	int value = 1;

	cout << ::value << endl;
	cout << value << endl;

	Do();
	Do();
	Do();
	Do();

	Do2();

	cout << c << endl;

	cout << "In Main.cpp" << Constants::pi << " "<<
		&Constants::pi  <<endl;
	//메모리낭비..
	//extern으로 하면 메모리 절약 가능

	Do3();

	return 0;
}

