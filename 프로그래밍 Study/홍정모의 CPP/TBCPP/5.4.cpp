//goto
//��뵵 ���� 

#include <iostream>
#include <cmath> // sqrt()

using namespace std;

int main()
{
	double x;

tryAgain: // lable
	cout << "Enter a non-negative number" << endl;
	cin >> x;

	if (x < 0.0)
		goto tryAgain; //lable�� ��

	cout << sqrt(x) << endl;

/*���� �ȸ���
goto skip;
int x = 5;
skip:	
x += 3;*/ 
		

	return 0;
}