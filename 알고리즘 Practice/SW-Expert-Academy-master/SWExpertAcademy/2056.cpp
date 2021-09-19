#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
	
	std::vector<int> Date(T + 1, 0);
	std::vector<int> Year(T + 1, 0);
	std::vector<int> Month(T + 1, 0);
	std::vector<int> Day(T + 1, 0);

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> Date[test_case];		

		Year[test_case] = Date[test_case] / 10000;
		Month[test_case] = (Date[test_case] - Year[test_case] * 10000) / 100;
		Day[test_case] = Date[test_case] % 100;
	}

	for (int i = 1; i <= T; ++i)
	{
		cout << "#" << i <<" ";
		if (Month[i] > 13 || Month[i] < 01)
		{
			cout << -1 << endl;
		}
		else if(Day[i] < 0 || Day[i] > 31)
		{
			cout << -1 << endl;
		}
		else if (Month[i] == 2 && Day[i] > 28)
		{
			cout << -1 << endl;
		}
		else if (Month[i] == 4 ||
			Month[i] == 6 ||
			Month[i] == 9 ||
			Month[i] == 11)
		{
			if (Day[i] > 30)
				cout << -1 << endl;
			else
				goto next;
		}
		else
		{
			next:
			cout.width(4); cout.fill('0');
			cout << Year[i] << "/";
			cout.width(2); cout.fill('0');
			cout << Month[i] << "/";
			cout.width(2); cout.fill('0');
			cout << Day[i] << endl;
		}
	}

	return 0;
}