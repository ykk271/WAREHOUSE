#include <iostream>
#include <string>
using namespace std;



//void print(int x = 271, int y = 20, int z = 30) // in header
//둘중에 하나만 기본값이 있어야 됨
//header에다가 쓰는게 좋음
//void print(int x = 271, int y = 20, int z = 30)
//{
//	cout << x << " " << y << " " << z << endl;
//}

void print(int x) {}
void print(int x, int y =10) {}

int main()
{
	//print();
	//print(100);
	//print(100, 200);
	//print(100, 200, 300);

	//print(10); //디폴트때문에 오버로딩이 방해받을 수 있음
	
	return 0;
}