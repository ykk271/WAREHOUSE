#include <iostream>

using namespace std;

void triangleLB(int n);
void triangleLU(int n);
void triangleRU(int n);
void triangleRB(int n);
void spira(int n);
void nrpira(int n);


int main(void)
{
	int i, j, n;
	do {
		cout << "단 수 입력: ";
		cin >> n;
		if (n <= 0)
		{
			cout << "한자리 수 양의 정수를 입력하세요." << endl;
		}
	} while (n <= 0 || n >= 10);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}


	cout << "=======Q16=======" << endl;
	triangleLB(n);
	cout << "=======Q16_1=======" << endl;
	triangleLU(n);
	cout << "=======Q16_2=======" << endl;
	triangleRU(n);
	cout << "=======Q16_3=======" << endl;
	triangleRB(n);
	cout << "=======Q17=======" << endl;
	spira(n);
	cout << "=======Q18=======" << endl;
	nrpira(n);




	return 0;

}


void triangleLB(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}

}

void triangleLU(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = n - i + 1; j >= 1; j--)
			cout << "*";
		cout << endl;
	}

}


void triangleRU(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i - 1; j++)
			cout << " ";


		for (j = n - i + 1; j >= 1; j--)
			cout << "*";

		cout << endl;
	}

}


void triangleRB(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = n - i + 1; j >= 1 + 1; j--)
			cout << " ";

		for (j = 1; j <= i; j++)
			cout << "*";

		cout << endl;
	}

}


void spira(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		if (i%2 == 1)
		{

			for (j = 1; j <= (n-i)/2; j++)
			{
				cout << " ";
			}

			
			for (j = 1; j <= i; j++)
			{
				cout << "*";
			}

			cout << endl;
		}

	}

}



void nrpira(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i-1; j++)
			cout << " ";
		

		for (j = 1; j <= 2*(n - i)+1 ; j++)
		{
			cout << i;
		}

 

	cout << endl;
	}

}