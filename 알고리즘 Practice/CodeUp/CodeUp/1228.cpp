#include <iostream>	

using namespace std;

int main()
{
	double a, b;

	cin >> a >> b;

	double stWeight = (a - 100) * 0.9;
	double result = (b - stWeight) * 100 / stWeight;

	if (result > 20)
		cout << "비만";
	else if (result > 10 && result <= 20)
		cout << "과체중";
	else
		cout << "정상";

	return 0;
}