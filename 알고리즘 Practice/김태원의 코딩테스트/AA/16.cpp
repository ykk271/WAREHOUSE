#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	//freopen("input.txt", "r", stdin);

	string str1;
	string str2;

	bool isTrue = true;

	cin >> str1 >> str2;

	vector<int> v1(str1.size());
	vector<int> v2(str1.size());

	
	for (int i = 0; i < str1.size(); ++i)
	{
		v1[i] = str1[i];
		v2[i] = str2[i];
	}

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	for (int i = 0; i < str1.size(); ++i)
	{
		if (v1[i] != v2[i])
		{
			isTrue = false;
			break;
		}		
	}


	if (isTrue)
		cout << "YES";
	else
		cout << "NO";
	

	return 0;
}