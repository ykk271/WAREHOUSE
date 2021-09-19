#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n;
Re:
	cin >> m;
	cout << m << endl;
	n--;
	if (n != 0) goto Re;


	return 0;
}
