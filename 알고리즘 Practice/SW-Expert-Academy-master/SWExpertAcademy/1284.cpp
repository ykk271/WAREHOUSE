#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>


using namespace std;

int main(int argc, char** argv)
{
	//freopen("input.txt", "r", stdin);

	int test_case;
	int T;

	cin >> T;

	int P, Q, R, S, W;
	int Price;
	int PA;
	int PB;

	for (test_case = 0; test_case < T; ++test_case)
	{

		cin >> P >> Q >> R >> S >> W;
		

		PA = W * P;

		if (W <= R)
		{
			PB = Q;
		}
		else
		{
			PB = Q + (W - R) * S;
		}



		if (PA <= PB)
			Price = PA;
		else
			Price = PB;

		cout << "#" << test_case + 1 << " " << Price << endl;

	}


	return 0;
}