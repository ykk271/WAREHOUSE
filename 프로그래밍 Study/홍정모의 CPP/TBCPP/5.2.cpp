//조건문 if

#include<iostream>


using namespace std;

int min(int x, int y)
{
	if (x > y)  return y;
	else		return x;
}


int main()
{
	//int x;

	//cin >> x;

	//if (x > 10) 
	//{
	//	cout << "x > 10" << endl;
	//}
	//else 
	//{
	//	cout << "x < 10" << endl;
	//}	 

	//if (1) //boolean
	//	int y = 5; // if 문 안에서는 변수 선언 안하는게 좋음 범위 떄문에
	//else
	//	int y = 6;

	////cout << y << endl; //에러남

	//if (x > 10)
	//	cout << "x > 10" << endl;
	//else if (x < 10)
	//	cout << "x < 10" << endl;
	//else // if ( x == 10)
	//	cout << "x is exactly 10" << endl; 

	//int z; 
	//
	//cin >> z;

	//if (z >= 10)
	//{ // 명확하게 하려면 꼭 중괄호
	//	if (z >= 20)
	//		cout << "x is between 10 and 20" << endl;
	//	else // 어디에 걸릴까?? (중괄호가 없다면) // 문법상 가장 가까운데 붙음
	//		cout << "..." << endl;
	//}

	cout << "==========================" << endl;

	//int a, b;

	//cin >> a >> b;

	//if (a > 0 && b > 0)
	//	cout << "both numbers are positive" << endl;
	//else if (a > 0 || b > 0)
	//	cout << "Not same" << endl;
	//else
	//	cout << "Neither number is positive" << endl;

	cout << "==========================" << endl;

	//int x;
	//cin >> x;

	//if (x > 10)
	//	cout << "A" << endl;
	//else if (x == -1)
	//	return 0; // 프로그램 긴급하게 종료 또는 exit 
	//else if (x < 0)
	//	cout << "B" << endl;

	//cout << "................." << endl;


	cout << "==========================" << endl;

	//cout << min(1, 2) << endl;

	int x = 10;

	//if (x > 10); // NULL stament
	//{
	//	x = 1;
	//}

	if(x = 0) // if(x ==0) // 0이 x에 대입이 되어버림 
		cout << x << endl;

	cout << x << endl;



	return 0;	
}