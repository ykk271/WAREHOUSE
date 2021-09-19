#include <iostream>

using namespace std;

int search(const int a[], int n, int key)
{
	int i = 0;
	while (true)
	{
		if (i == n)
			return -1;
		if (a[i] == key)
			return i;

		i++;
	}
}

int main()
{
	int i, nx, ky, idx;
	int* x;
	cout << "선형검색" << endl;
	cout << "요소개수: ";
	cin >> nx;
	x = new int[nx];
	for (i = 0; i < nx; i++)
	{
		cout << "x[" << i << "]: ";
		cin >> x[i];
	}

	cout << "검색 값: ";
	cin >> ky;
	idx = search(x, nx, ky);
	if (idx == -1)
		cout << "검색에 실패했습니다." << endl;
	else
		cout << ky << "(은)는 " <<"x[" << idx << "]에 있습니다";
	
	delete[] x;

	return 0;
}