#include <iostream>	

using namespace std;

int main()
{
	double a, b;

	cin >> a >> b;

	double stdWeight;
	double result;

	if (a < 150)
		stdWeight = a - 100;
	else if (a >= 150 && a < 160)
		stdWeight = (a - 150) / 2 + 50;
	else if (a >= 160)
		stdWeight = (a - 100) * 0.9;
	
	result = (b - stdWeight) * 100 / stdWeight;

	if (result <= 10)
		cout << "����";
	else if (result > 10 && result <= 20)
		cout << "��ü��";
	else if (result > 20)
		cout << "��";

	


	return 0;
}