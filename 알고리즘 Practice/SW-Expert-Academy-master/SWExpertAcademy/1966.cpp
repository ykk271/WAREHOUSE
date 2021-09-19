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

	std::vector<int> result(T);

	int N;

	for (test_case = 0; test_case < T; ++test_case)
	{
		cin >> N;

		std::vector<int> arr(N);

		for (int i = 0; i < N; i++)
		{
			cin >> arr[i];
		}
		

		std::sort(arr.begin(), arr.end());

		

		cout << "#" << test_case + 1 << " ";
		for (int i = 0; i < N; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}


	return 0;
}