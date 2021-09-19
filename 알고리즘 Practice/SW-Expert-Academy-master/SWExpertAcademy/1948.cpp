#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


using namespace std;

int main(int argc, char** argv)
{
	//freopen("input.txt", "r", stdin);

	int test_case;
	int T;

	cin >> T;

	std::vector<int> result(T);

	int a, b, c, d;
	int sum;

	for (test_case = 0; test_case < T; ++test_case)
	{
		cin >> a >> b >> c >> d;
		sum = 0;

		sum += d - b + 1;

		for (int i = a; i < c; ++i)
		{
			if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
				sum += 31;
			else if (i == 4 || i == 6 || i == 9 || i == 11)
				sum += 30;
			else
				sum += 28;
		}
	


		cout << "#" << test_case + 1 << " " << sum << endl;
	}


	return 0;
}