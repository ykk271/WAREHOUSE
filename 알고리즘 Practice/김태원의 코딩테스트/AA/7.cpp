#include <iostream>

using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);

	char a[101];
	char res[101];
	int cnt = 0;

	cin.getline(a, 101);

	for (int i = 0; i < 101; ++i)
	{
		if (a[i] >= 97 && a[i] <= 122)
		{
			res[cnt] = a[i];
			cnt++;
		}
		else if (a[i] >= 65 && a[i] <= 90)
		{
			res[cnt] = a[i] + 32;
			cnt++;
		}			
	}

	res[cnt] = '\0';

	cout << res;
	

	return 0;
}