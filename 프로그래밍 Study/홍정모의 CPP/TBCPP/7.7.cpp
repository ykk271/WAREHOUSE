#include <iostream>
#include <string>

using namespace std;

int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}

void getRandom(int &x){}
void getRandom(double &x) {}

//같은타입으로 인식해서 빌드 안됨
//typedef int my_int;
//void printf(int x){}
//void printf(my_int x){}

void print(char *value){}
void printf(int value){}

void printf(unsigned int value){}
void printf(float value){}

int main()
{
	//함수 이름이 같아도 파라미터가 다르면 다른 함수로 판단
	//컴파일때 결정이 되어야 함
	add(1, 2);
	add(3.0, 4.0);

	//두줄로 나눠야 하는게 단점
	int x;
	getRandom(x);

	print(0);
	// print('a'); //오류 
	//print(3.14); //모호해서 오류
	printf(3.14f); //오류안남
	//기본적으로는 함수를 명확하게 만드는게 좋음


	return 0;
}