#include <iostream>

using namespace std;

int card_convr(unsigned x, int n, char d[])
{
	char dchar[] = "0123456789ABCDEFGHIJKLNMOPQRSTUVWXYZ";
	int digits = 0;

	if (x == 0)
		d[digits++] = dchar[0];

	else
		while (x) {
			d[digits++] = dchar[x % n];
			x /= n;
		}

	return digits;

}

int main()
{
	int i;
	unsigned no;
	int cd;
	int dno;

	char cno[512];
	int retry;
	cout << "10진수를 기수 변환합니다." << endl;

	do {
		cout << "변환하는 음이 아닌 정수: ";
		cin >> no;
		do {
			cout << "어떤 진수로 변환할까요?(2-36): ";
			cin >> cd;
		} while (cd < 2 || cd >36);

		dno = card_convr(no, cd, cno);
		cout << cd << "진수로는";
		for (i = dno - 1; i >= 0; i--)
			cout << cno[i];
		cout << "입니다.";
		cout << "한번 더 할까요? 1 or 0: ";
		cin >> retry;			
	} while (retry == 1);


	return 0;
}