#include <iostream>
#include <vector>

using namespace std;

void addOne(int& y)
{
	y++;
	cout << y << " " << &y << endl;
}
//c++�� ���Ÿ���� �ϳ��ۿ� ��� �̷��� ��
//&�� ������ ����̴� �����Ͻÿ�
//const�� �ھƵδ� ������ ����
void GetSinCos(const double degrees, double& SinOut, double& CosOut)
{
	//static�� �ѹ��� ���ǵǴϰ� ȿ�� ������
	static const double pi = 3.141592;
	const double radians = degrees * pi / 180.0;
	SinOut = sin(radians);
	CosOut = cos(radians);
}

//void foo(int& x)
//�Ʒ��� ���� ���¸� ���� ���� ��
void foo(const int& x)
{
	cout << x << endl;
}

typedef int* pint;

void foo2(pint &x)
{
	cout << x << " " << &x << endl;
}

//arr ���� ���ƾ���
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

	//�����Ϳ� ���� ���۷���	
	int* ptr = &x;
	foo2(ptr);

	//int arr[] = { 1, 2, 3, 4 };
	vector<int> arr{ 1,2,3,4,5 };
	ptintElement(arr);
	 

	return 0;
}