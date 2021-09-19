#include <iostream>
#include <vector>
#include <string>
#include <cmath>


using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);

	string N;
	cin >> N;
	int cnt = 0;
	int i = N.size();

	int digit = 1;

	for (int j = 1; j < i; ++j)
	{
		cnt += 9 * digit * j;
		digit *= 10;
	}

	int rem = atoi(N.c_str());
	rem = rem - pow(10, i - 1) + 1;

	cnt = cnt + rem * i;
				

	cout << cnt;


	return 0;
}