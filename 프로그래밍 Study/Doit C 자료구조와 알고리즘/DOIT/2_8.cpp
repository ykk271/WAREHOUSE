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
	cout << "10������ ��� ��ȯ�մϴ�." << endl;

	do {
		cout << "��ȯ�ϴ� ���� �ƴ� ����: ";
		cin >> no;
		do {
			cout << "� ������ ��ȯ�ұ��?(2-36): ";
			cin >> cd;
		} while (cd < 2 || cd >36);

		dno = card_convr(no, cd, cno);
		cout << cd << "�����δ�";
		for (i = dno - 1; i >= 0; i--)
			cout << cno[i];
		cout << "�Դϴ�.";
		cout << "�ѹ� �� �ұ��? 1 or 0: ";
		cin >> retry;			
	} while (retry == 1);


	return 0;
}