#include <iostream>
#include <random>
using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void array_reverse(int a[], int n)
{
	int i, j;

	for (i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	for (j = 0; j < n / 2; j++)
	{		
		swap(a[j], a[n - j - 1]);
		cout << "a[" << j << "]" << "과 a[" << n - j - 1 << "]" << "를 교환합니다." << endl;
		for (i = 0; i < n; ++i)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}

	cout << "역순 정렬을 종료합니다";
}

int main()
{
	int i;
	int* x;
	int nx;

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(5, 20);
	std::uniform_int_distribution<int> dis2(1, 100);

	nx = dis(gen);

	x = new int[nx];

	for (i = 0; i < nx; ++i)
	{
		x[i] = dis2(gen);
	}


	array_reverse(x, nx);

	delete[] x;

	return 0;
}