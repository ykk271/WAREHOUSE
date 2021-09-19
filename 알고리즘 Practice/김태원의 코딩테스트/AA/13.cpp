#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
	//freopen("input.txt", "r", stdin);

	string a;
	int tmp;
	int max = -2147000000;
	int count[10] = { 0, };

	int result;

	cin >> a;



	for (int i = 0; i < a.size(); i++)
	{
		tmp = a[i] - 48;
		count[tmp]++;
	}


	for (int i = 0; i < 10; ++i)
	{
		
		if (count[i] >= max)
		{			
			max = count[i];
			result = i;
		}
	}

	cout << result;

	return 0;
}