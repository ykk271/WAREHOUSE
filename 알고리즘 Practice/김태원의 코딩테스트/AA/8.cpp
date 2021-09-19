#include <iostream>

using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);

	char a[31];

	cin >> a;

	int b = 0;
	int i;

	for (i = 0; a[i] != '\0'; ++i)
	{
		if (a[i] == '(')
			b++;
		else if (a[i] == ')')
			b--;

		if (b < 0)
		{
			break;
		}
	}

	if (b == 0)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}