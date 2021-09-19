#include<iostream>
#include<vector>
#include<algorithm>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	double Index;

	cin >> T;

	std::vector<int> Input(T, 0);

	Index = T / 2;


	for (test_case = 0; test_case < T; ++test_case)
	{
			cin >> Input[test_case];
	}

	sort(Input.begin(), Input.end());

	

	cout << Input[Index] << endl;

	return 0;
}