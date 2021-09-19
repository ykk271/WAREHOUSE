#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);

	int N;
	cin >> N;
	vector<int> a(N);
	vector<int> b(N);
	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];		
	}
	for (int i = 0; i < N; ++i)
	{
		cin >> b[i];
	}
	for (int i = 0; i < N; ++i)
	{
		if (a[i] == b[i])
			cout << "D" << endl;
		else if (a[i] - b[i] == 1)
			cout << "A" << endl;
		else if (b[i] - a[i] == 1)
			cout << "B" << endl;
		else if (a[i] - b[i] == 2)
			cout << "B" << endl;
		else if (b[i] - a[i] == 2)
			cout << "A" << endl;
	}


	return 0;
}