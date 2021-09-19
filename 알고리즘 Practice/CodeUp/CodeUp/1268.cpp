#include <iostream>	

using namespace std;

int main()
{
	int N;
	int* a = new int[N];
	int count = 0;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];

		if (a[i] % 2 == 0)
			count++;
	}

	cout << count;

	delete a;

	return 0;
}
