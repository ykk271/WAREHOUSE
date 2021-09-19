#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	std::vector<string> result(T+1);

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int a, b;
		cin >> a >> b;
		
		if (a < b)
			result[test_case] = "<";
		else if(a > b)
			result[test_case] = ">";
		else
			result[test_case] = "=";
	}

	for (int i = 1; i <= T; ++i)
	{
		cout << "#" << i << " " << result[i] << endl;
	}

	return 0;
}