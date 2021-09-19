#include <iostream>

using namespace std;

int main()
{
	int long a, r, n;
	cin >> a >> r >> n;

	
	for (int i = 0; i < n-1; i++)
	{		
		a = a * r;		
	}

	cout << a << endl;

	return 0;
}
