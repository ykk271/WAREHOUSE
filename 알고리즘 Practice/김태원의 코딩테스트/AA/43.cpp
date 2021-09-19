#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);

	int N, M;
	int sum = 0;
	cin >> N >>M;
	vector<int> a(N);
	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];
		sum += a[i];
	}
	sort(a.begin(), a.end());

	int memory = sum / 2;

	 
	



	return 0;
}