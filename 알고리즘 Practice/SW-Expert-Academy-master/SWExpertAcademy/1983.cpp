#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>

using namespace std;

int main(int argc, char** argv)
{
	freopen("input.txt", "r", stdin);

	int test_case;
	int T;

	cin >> T;

	std::vector<string> result(T);

	int a, b, c;
	int N, target;

	double rank = 1.0;
	double tmp;
	string resultScore;

	for (test_case = 0; test_case < T; ++test_case)
	{
		cin >> N >> target;
		vector<double> score(N);
		for (int i = 0; i < N; i++)
		{
			cin >> a >> b >> c;
			score[i] = a * 0.35 + b * 0.45 + c * 0.2;
		}

		for (int i = 0; i < N; i++)
		{
			if (score[target - 1] < score[i])
				rank++;
		}
		tmp = ceil(rank / (N / 10));

		switch ( (int)tmp )
		{
		case 1:
			resultScore = "A+" ;
			break;
		case 2:
			resultScore = "A0";
			break;
		case 3:
			resultScore = "A-";
			break;
		case 4:
			resultScore = "B+";
			break;
		case 5:
			resultScore = "B0";
			break;
		case 6:
			resultScore = "B-";
			break;
		case 7:
			resultScore = "C+";
			break;
		case 8:
			resultScore = "C0";
			break;
		case 9:
			resultScore = "C-";
			break;
		case 10:
			resultScore = "D0";
			break;
		}


		result[test_case] = resultScore;
		rank = 1;
	}

	for (int i = 0; i < T; ++i)
	{
		cout << "#" << i + 1 << " " << result[i] << endl;
	}

	return 0;
}