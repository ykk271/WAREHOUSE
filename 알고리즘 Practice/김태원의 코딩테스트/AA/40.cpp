#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);

	int N, M;
	cin >> N;
	vector<int> a(N);
	

	int tmp;

	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	
	cin >> M;
	vector<int> b(M);
	for (int i = 0; i < M; ++i)
	{
		cin >> b[i];
	}
	sort(b.begin(), b.end());

	vector<int> res(N >= M ? N : M);
	int p1 = 0;
	int p2 = 0;
	int p3 = 0;
	
	
	while (1)
	{
		if (a[p1] > b[p2])
		{
			p2++;
		}
		else if (a[p1] < b[p2])
		{
			p1++;
		}
		else
		{
			res[p3++] = a[p1];
			p1++;
			p2++;
		}

		if (p1 == N || p2 == M)
			break;
	}

	for (int i = 0; i < p3; ++i)
	{
		cout << res[i] << " ";
	}

		

	return 0;
}