#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);

	string str;
	int H_index;
	int res = 0;
	int tmp;

	cin >> str;

	for (int i = 0; i < str.size(); ++i)
	{

		if (str[i] == 'H')
		{
			H_index = i;
			break;			
		}
	}

	if (H_index == 1)
	{
		res += 12;
		tmp = 1;
		for (int i = str.size() - 1; i > H_index; --i)
		{
			res += tmp * (str[i] - 48);
			tmp *= 10;
		}
	}
	else if (H_index == str.size() - 1)
	{
		res += 1;
		tmp = 1;
		for (int i = H_index - 1; i > 0; --i)
		{
			res += tmp * (str[i] - 48) * 12;
			tmp *= 10;
		}
	}
	else
	{
		tmp = 1;
		for (int i = str.size() - 1; i > H_index; --i)
		{
			res += tmp * (str[i] - 48);
			tmp *= 10;
		}
		tmp = 1;
		for (int i = H_index - 1; i > 0; --i)
		{
			res += tmp * (str[i] - 48) * 12;
			tmp *= 10;
		}
	}




	cout << res;
	

	return 0;
}