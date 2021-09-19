#include <iostream>

using namespace std;

int main(void)
{
	int i, j;
	cout << "====곱셉표====" << endl;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			cout.width(4);
			cout << i * j;
		}

		cout << endl;			
	}

	cout << "============================" << endl;
	cout << "============================" << endl;

	//Q12
	cout << "Q12" << endl;


	cout << "   ";
	for (j = 1; j <= 9; j++)
	{
		cout.width(4);
		cout << j;
	}
		cout << endl;
		cout << "---+------------------------------------"<<endl;



	for (i = 1; i <= 9; i++)
	{	
		cout << i << " |";
		for (j = 1; j <= 9; j++)
		{			
			cout.width(4);
			
			cout << i * j;
		}

		cout << endl;
	}


	cout << "============================" << endl;
	cout << "============================" << endl;

	//Q13
	cout << "Q13" << endl;


	cout << "   ";
	for (j = 1; j <= 9; j++)
	{
		cout.width(4);
		cout << j;
	}
	cout << endl;
	cout << "---+------------------------------------" << endl;



	for (i = 1; i <= 9; i++)
	{
		cout << i << " |";
		for (j = 1; j <= 9; j++)
		{
			cout.width(4);

			cout << i + j;
		}

		cout << endl;
	}


	cout << "============================" << endl;
	cout << "============================" << endl;

	//Q14
	cout << "Q14" << endl;

	int n;

	cout << "사각형을 출력합니다. " << endl;
	cout << "입력할 수: ";
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << "*";
		}

		cout << endl;
	}


	//Q15
	cout << "Q15" << endl;

	int k;

	cout << "사각형을 출력합니다. " << endl;
	cout << "입력할 수 1: ";
	cin >> n;
	cout << "입력할 수 2: ";
	cin >> k;

	for (i = 1; i <= k; i++)
	{
		for (j = 1; j <= n; j++)
		{
			cout << "*";
		}

		cout << endl;
	}

	return 0;

}