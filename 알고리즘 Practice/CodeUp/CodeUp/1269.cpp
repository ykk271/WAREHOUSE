#include <iostream>	

using namespace std;

int main()
{
	int a, b, c, d;
	
	cin >> a >> b >> c >> d;

	int* arr = new int[d];
	
	arr[0] = a;

	for (int i = 1; i < d; ++i)
	{
		arr[i] = arr[i - 1] * b + c;
	}

	cout << arr[d-1];

	delete[] arr;

	return 0;
}