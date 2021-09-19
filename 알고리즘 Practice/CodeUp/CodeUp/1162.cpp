#include <iostream>	

using namespace std;

int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	if ((a - b + c) % 10 == 0)
		cout << "대박";
	else
		cout << "그럭저럭";

	return 0;
}