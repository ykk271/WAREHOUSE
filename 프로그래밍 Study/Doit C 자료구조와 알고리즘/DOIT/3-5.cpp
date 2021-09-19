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
	cout << "bsearch �Լ��� ����Ͽ� �˻�: " << endl;
	cout << "��Ұ��� : ";
	cin >> nx;
	x = new int[nx];

	for (i = 0; i < nx; ++i)
	{
		cout << "x[" << i << "]: ";
		cin >> x[i];
	}

	sort(x, x + nx);

	cout << "�˻� ��:";
	cin >> ky;

	p = bsearch(&ky, x, nx, sizeof(int),
		(int(*)(const void*, const void*)) int_cmp
	);

	if (binary_search(x, x + nx, ky))
		cout << "ã��";
	else
		cout << "��ã��";


	return 0;
}