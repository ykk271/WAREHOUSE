#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char** argv)
{
	int N;
	
	vector<int>a(4, 0);
	
	int result;

	cin >> N;

	if (N >= 1000)
	{
		a[0] = N / 1000;
		a[1] = (N - a[0] * 1000) / 100;
		a[2] = (N - a[0] * 1000 - a[1]*100) / 10;
		a[3] = N % 10;

	}

	result = a[0] + a[1] + a[2] + a[3];

	cout << result << endl;

	return 0;
}