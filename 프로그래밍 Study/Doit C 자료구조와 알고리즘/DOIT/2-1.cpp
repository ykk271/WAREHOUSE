#include <iostream>

using namespace std;

int main()
{
	const int N = 5;

	int i;

	int a[N];
	for (i = 0; i < N; i++)
	{
		cout << "a[" << i << "]" << ": ";
		cin >> a[i];
	}

	cout << "각 요소의 값" << endl;
	for (i = 0; i < N; i++)
	{
		cout << "a[" << i << "]" << " = " << a[i] << endl;
	}

	return 0;
}