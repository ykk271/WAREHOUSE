//goto
//사용도 낮음 

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
		goto tryAgain; //lable로 감

	cout << sqrt(x) << endl;

/*논리가 안맞음
goto skip;
int x = 5;
skip:	
x += 3;*/ 
		

	return 0;
}