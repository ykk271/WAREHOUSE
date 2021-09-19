#include <iostream>

using namespace std;

int search(int a[], int n, int key)
{
	int i = 0;
	a[n] = key;
	while (true)
	{
		if (a[i] == key)
			break;

		i++;
	}

	return i == n ? -1 : i;
}

int main()
{
	int i, nx, ky, idx;
	int* x;
	cout << "선형검색(보초법)" << endl;
	cout << "요소 개수: "; cin >> nx;
	x = new int[nx+1];
	for (i = 0; i < nx; i++)
	{
		cout << "x[" << i << "]: ";
		cin >> x[i];
	}
	cout << "검색 값: ";
	cin >> ky;
	idx = search(x, nx, ky);
	if (idx == -1)
		cout << "검색에 실패했습니다";
	else
		cout << ky << "값은 [" << idx << "]에 있습니다.";

	delete[] x;

	return 0;
}