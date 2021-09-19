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

	int N;
	int result;
	
	int mode;
	int acc;
	int speed;

	for (test_case = 0; test_case < T; ++test_case)
	{
		result = 0;
		speed = 0;

		cin >> N;

		for (int i = 1; i <= N; ++i)
		{
			cin >> mode;

			if (mode == 1)
			{
				cin >> acc;
				speed += acc;
				result += speed;
			}
			else if(mode == 2)
			{
				cin >> acc;

				if (speed < acc)
				{
					speed = 0;
				}
				else
				{
					speed -= acc;
				}

				result += speed;
			}
			else if (mode == 0)
			{
				result += speed;
			}

		}



		cout << "#" << test_case + 1 << " " << result << endl;;


	}


	return 0;
}