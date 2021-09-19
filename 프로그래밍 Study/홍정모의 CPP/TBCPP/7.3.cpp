#include <iostream>
#include <vector>

using namespace std;

void addOne(int& y)
{
	y++;
	cout << y << " " << &y << endl;
}
//c++은 출력타입이 하나밖에 없어서 이렇게 씀
//&이 붙으면 출력이다 생각하시오
//const를 박아두는 습관은 좋음
void GetSinCos(const double degrees, double& SinOut, double& CosOut)
{
	//static은 한번만 정의되니간 효율 좋아짐
	static const double pi = 3.141592;
	const double radians = degrees * pi / 180.0;
	SinOut = sin(radians);
	CosOut = cos(radians);
}

//void foo(int& x)
//아래와 같은 형태를 가장 많이 씀
void foo(const int& x)
{
	cout << x << endl;
}

typedef int* pint;

void foo2(pint &x)
{
	cout << x << " " << &x << endl;
}

//arr 개수 같아야함
//void printElement (int (&arr)[4])
void ptintElement(const vector<int>& arr)
{

}

int main()
{
	int x = 5;

	cout << x << " " << &x << endl;
	addOne(x);
	cout << x << " " << &x << endl;

	double sin = 0.0;
	double cos = 0.0;

	GetSinCos(30.0, sin, cos);

	cout << sin << " " << cos << endl;
		
	foo(6);

	//포인터에 대한 레퍼런스	
	int* ptr = &x;
	foo2(ptr);

	//int arr[] = { 1, 2, 3, 4 };
	vector<int> arr{ 1,2,3,4,5 };
	ptintElement(arr);
	 

	return 0;
}