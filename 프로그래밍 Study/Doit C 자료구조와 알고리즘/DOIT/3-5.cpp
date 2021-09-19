#include <iostream>
#include <algorithm>
#include <stdlib.h>


using namespace std;

int int_cmp(const int *a, const int *b)
{
	if (*a < *b)
		return -1;
	else if (*a > *b)
		return 1;
	else
		return 0;
}

int main()
{
	int i, nx, ky;
	int* x;
	int* p;
	cout << "bsearch 함수를 사용하여 검색: " << endl;
	cout << "요소개수 : ";
	cin >> nx;
	x = new int[nx];

	for (i = 0; i < nx; ++i)
	{
		cout << "x[" << i << "]: ";
		cin >> x[i];
	}

	sort(x, x + nx);

	cout << "검색 값:";
	cin >> ky;

	p = bsearch(&ky, x, nx, sizeof(int),
		(int(*)(const void*, const void*)) int_cmp
	);

	if (binary_search(x, x + nx, ky))
		cout << "찾음";
	else
		cout << "못찾음";


	return 0;
}