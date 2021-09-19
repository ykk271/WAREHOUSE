#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;

	int A = 300;
	int B = 60;
	int C = 10;

	int A_number;
	int B_number;
	int C_number;

	A_number = T / A;
	B_number = (T%A) / B;
	C_number = ((T % A) % B) / C;
	if (((T % A) % B) % C != 0)
		cout << -1;
	else
		cout << A_number << " " << B_number << " " << C_number << " ";
	
}