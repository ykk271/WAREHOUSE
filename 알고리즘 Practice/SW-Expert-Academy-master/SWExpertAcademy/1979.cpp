#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


using namespace std;

int main(int argc, char** argv)
{
	freopen("input.txt", "r", stdin);

	int test_case;
	int T;

	cin >> T;

	std::vector<int> resultHour(T);
	std::vector<int> resultMinute(T);

	int a_1, a_2, b_1, b_2;


	for (test_case = 0; test_case < T; ++test_case)
	{
		int hour = 0;
		int minuts = 0;

		cin >> a_1 >> b_1 >> a_2 >> b_2;

		hour += a_1 + a_2;
		hour += (b_1 + b_2) / 60;
		minuts += (b_1 + b_2) % 60;


		if (hour > 12)
			hour -= 12;

		resultHour[test_case] = hour;
		resultMinute[test_case] = minuts;
	}

	for (int i = 0; i < T; ++i)
	{
		cout << "#" << i + 1 << " " << resultHour[i] <<
			" " << resultMinute[i] << endl;
	}

	return 0;
}
