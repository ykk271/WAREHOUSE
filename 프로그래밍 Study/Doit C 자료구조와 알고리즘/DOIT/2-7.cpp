#include <iostream>

using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void array_reverse(int a[], int n)
{
	int i;
	for (i = 0; i < n / 2; i++)
		swap(a[i], a[n - i - 1]);
}

int main()
{
	int i;
	int* x;
	int nx;

	cout << "요소 개수: ";
	cin >> nx;

	x = new int[nx];
	cout << nx << "개의 정수를 입력하세요." << endl;

	for (i = 0; i < nx; ++i)
	{
		cout << "x[" << i << "]: ";
		cin >> x[i];
	}

	array_reverse(x, nx);
	cout << "배열의 요소를 역순으로 정렬했습니다." << endl;
	for (i = 0; i < nx; ++i)
		cout << "x[" << i << "] = " << x[i] << endl;

	delete x;


	return 0;
}