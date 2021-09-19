#include <iostream>

using namespace std;

int main()
{
	int i;
	int* a;
	int na;
	cout << "요소개수: ";
	cin >> na;

	a = new int[na];

	if (a == NULL)
		cout << "메모리 확보에 실패했습니다.";
	else
	{
		cout << "na개의 정수를 입력하세요." << endl;
		for (i = 0; i < na; ++i)
		{
			cout << "a[" << i << "]: ";
			cin >> a[i];			
		}

		cout << "각 요솟값은 아래와 같습니다." << endl;
		for (i = 0; i < na; ++i)
			cout << "a[" << i << "]: " << a[i] << endl;

		delete a;
	}



	return 0;
}