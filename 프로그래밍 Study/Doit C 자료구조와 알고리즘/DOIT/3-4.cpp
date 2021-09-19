#include <iostream>
#include <random>
#include <algorithm>

using namespace std;

int bin_search(const int a[], int n, int key)
{
	int pl = 0;
	int pr = n - 1;
	int pc;
	do {
		pc = (pl + pr) / 2;
		if (a[pc] == key)
			return pc;
		else if (a[pc] < key)
			pl = pc + 1;
		else
			pr = pc - 1;
	} while (pl <= pr);
	return -1;

}

int main()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(10, 25);
	
	int i, nx, ky, idx;
	int* x;
	cout << "이진검색" << endl;
	cout << "요소개수: ";
	nx = dis(gen);
	cout << nx << endl;
	x = new int[nx];
	for (i = 0; i < nx; ++i)
	{
		x[i] = dis(gen);
	}

	sort(x, x + nx);

	
		
	do {
		cout << "검색값: ";
		cin >> ky;
		idx = bin_search(x, nx, ky);		
	} while (idx == -1);

	cout << ky << "는 x[" << idx << "]에 있습니다.";

	for (i = 0; i < nx; ++i)
		cout << x[i] << endl;

	delete[] x;

	return 0;
}