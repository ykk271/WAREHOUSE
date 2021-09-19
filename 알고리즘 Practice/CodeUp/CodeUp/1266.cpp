#include <iostream>	

using namespace std;

int main()
{
	int N;
	int *a = new int[N];
	int sum = 0;
	cin >> N;
	
	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];
		sum += a[i];
	}

	cout << sum;

	delete a;

	return 0;
}