#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);

	vector<int> a(10);
	vector<int> b(10);
	int A = 0;
	int B = 0;
	char last = 'D';
	for (int i = 0; i < 10; ++i)
	{
		cin >> a[i];		
	}
	for (int i = 0; i < 10; ++i)
	{
		cin >> b[i];
	}

	for (int i = 0; i < 10; ++i)
	{
		if (a[i] > b[i])
		{
			A = A + 3;
			last = 'A';
		}			
		else if (b[i] > a[i])
		{
			B = B + 3;
			last = 'B';
		}
			
		else if (a[i] == b[i])
		{
			A++;
			B++;
		}
	}

	cout << A << " " << B << endl;
	if (A > B)
		cout << "A";
	else if (A < B)
		cout << "B";
	else if (last == 'A' && A == B)
		cout << "A";
	else if (last == 'B' && A == B)
		cout << "B";
	else
		cout << "D";

	return 0;
}