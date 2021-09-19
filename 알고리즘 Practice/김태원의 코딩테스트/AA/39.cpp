#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);

	/*int N, M;
	cin >> N;
	int tmp;
	vector<int> a(N);

	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];
	}

	cin >> M;
	for (int i = 0; i < M; ++i)
	{
		cin >> tmp;
		a.push_back(tmp);
	}

	sort(a.begin(), a.end());

	for (int i = 0; i < a.size(); ++i)
	{
		cout << a[i] << " ";
	}*/


	int N, M;
	cin >> N;
	vector<int> n(N);
	for (int i = 0; i < N; ++i)
	{
		cin >> n[i];
	}
	cin >> M;
	vector<int> m(M);
	for (int i = 0; i < M; ++i)
	{
		cin >> m[i];
	}

	vector<int> res(N + M);

	int p1 = 0;
	int p2 = 0;
	int p3 = 0;

	for (int i = 0; i < res.size(); ++i)
	{
		if (n[p1] <= m[p2])
		{
			res[p3] = n[p1];
			p1++;
			p3++;
		}
		else
		{
			res[p3] = m[p2];
			p2++;
			p3++;
		}

		if (p1 == N)
		{
			for (int j = p2; j < M; ++j)
			{
				res[p3] = m[j];
				p3++;
			}

			break;
		}

		if (p2 == M)
		{
			for (int j = p1; j < N; ++j)
			{
				res[p3] = n[j];
				p3++;
			}

			break;
		}

	}

	for(int i = 0; i < res.size(); ++i)
	{
		cout << res[i] << " ";
	}

	return 0;
}