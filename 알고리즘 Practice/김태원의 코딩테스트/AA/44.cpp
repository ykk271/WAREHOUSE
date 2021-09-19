#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);

	int N, C;
	cin >> N >> C;
	vector<int> a(N);
	for (int i =0 ; i < N; ++i)
	{
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	int rt = a[N - 1];
	int lt = 1;


	int len = a[N - 1] / 2;
	bool sus = false;
	
	for (int i = 0; i < C; ++i)
	{
		b[i] = i;
	}
	

	return 0;
}