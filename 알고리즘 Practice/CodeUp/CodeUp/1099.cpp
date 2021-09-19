#include <iostream>

using namespace std;

int main()
{
	int a[11][11];

	for (int i = 1; i <= 10; ++i)
	{
		for (int j = 1; j <= 10; ++j)
		{
			cin >> a[i][j];
		}		
	}

    int x, y;
    x = 2;
    y = 2;

    while (1) {


        if (a[x][y] == 0) {
            a[x][y] = 9;
            y++;
        }
        if (a[x][y] == 1) {
            y--;
            x++;
        }

        if (a[x][y] == 2) {
            a[x][y] = 9;
            break;
        }
        else if (a[x][y + 1] == 1 && a[x + 1][y] == 1) {
            if (a[x][y] == 0) {
                a[x][y] = 9;
            }
            break;
        }
    }
	
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{			
			cout << a[i][j] << " ";
		}

		cout << endl;
	}


	return 0;
}