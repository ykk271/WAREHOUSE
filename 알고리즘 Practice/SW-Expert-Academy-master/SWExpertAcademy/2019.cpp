#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main(int argc, char** argv)
{
	int a;
	cin >> a;

	for (int i = 0; i <= a; ++i)
		cout << pow(2, i) << " ";
	

	return 0;
}