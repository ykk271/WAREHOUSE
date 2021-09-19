#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char** argv)
{
	vector<char>c(26, 0);

	for (int i = 0; i < 26; ++i)
		c[i] = getchar();

	for (int i = 0; i < 26; ++i)
		cout << c[i] - 64 << " ";

	return 0;
}