#include <iostream>

using namespace std;

int main()
{
	int w, h;
	int n;
	int d;
	int l;
	int x, y;

	cin >> h >> w;
	cin >> n;

	int a[100][100] = {};

	for (int i = 0; i < n; ++i)
	{
		cin >> l >> d >> x >> y;
		for (int j = 0; j < l; ++j)
		{
			if (d == 0)
			{
				a[y - 1][x - 1] = 1;
				y++;
			}
			else
			{
				a[y - 1][x - 1] = 1;
				x++;
			}
		}
	}


	for (int i = 0; i < h; ++i)
	{
		for (int j = 0; j < w; ++j)
		{
			cout << a[j][i] << " ";
		}
		cout << endl;
	}


	return 0;
}