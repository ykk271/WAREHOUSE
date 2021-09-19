#include<iostream>
#include<vector>
#include<string>


using namespace std;

int main(int argc, char** argv)
{
	string st;
	cin >> st;

	for (int i = 0; i < st.size(); ++i)
	{
		//if (st[i] = )
		cout << (char)toupper(st[i]);
		//else
			//cout << st[i];
	}

	return 0;
}