#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);

	int N;
	cin >> N;
	
	vector<int> rank(N, 1);
	vector<int> score(N);

	for (int i = 0; i < N; ++i)
	{
		cin >> score[i];
	}

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{

			if (score[i] > score[j])
				rank[j]++;
		}
	}

	

	for (const auto& e : rank)
	{
		cout << e << " ";
	}


	return 0;
}