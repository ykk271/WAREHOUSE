//�� ���� ���� �Է��ϰ� �ִ밪�� ���մϴ�.

#include <iostream>

using namespace std;

int main(void)
{
	int a, b, c;
	int max;

	cout << "�� ������ �ִ밪�� ���մϴ�." << endl;
	cout << "a ��: "; cin >> a;
	cout << "b ��: "; cin >> b;
	cout << "c ��: "; cin >> c;

	max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	cout << "�ִ밪��: " << max;

	return 0;
}