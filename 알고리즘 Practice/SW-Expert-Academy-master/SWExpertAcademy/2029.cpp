#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	std::vector<int> mok(T + 1, 0);
	std::vector<int> remain(T + 1, 0);
	std::vector<int> input(2, 0);

	for (test_case = 1; test_case <= T; ++test_case)
	{			
		cin >> input[0] >> input[1];
			mok[test_case] = input[0] / input[1];
			remain[test_case] = input[0] % input[1];

	}

	

	for (int i = 1; i <= T; ++i)
	{
		cout << "#" << i << " " << mok[i] << " " << remain[i] << endl;
	}

	return 0;
}