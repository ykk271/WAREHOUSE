#include <iostream>	
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector <int> a;
	int b = 0;
	for (int i = 0; i < N; ++i)
	{
		cin >> b;
		a.push_back(b);
	}

	//sort(a.begin(), a.end());

	cout << a[0] << " " << a[(N-1) / 2 ] << " " << a[N - 1];

	return 0;
}