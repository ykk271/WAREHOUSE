#include <iostream>	

using namespace std;

int main()
{
	double a, b;

	cin >> a >> b;

	double stWeight = (a - 100) * 0.9;
	double result = (b - stWeight) * 100 / stWeight;

	if (result > 20)
		cout << "��";
	else if (result > 10 && result <= 20)
		cout << "��ü��";
	else
		cout << "����";

	return 0;
}