#include <iostream>

using namespace std;

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void array_reverse(int a[], int n)
{
	int i;
	for (i = 0; i < n / 2; i++)
		swap(a[i], a[n - i - 1]);
}

int main()
{
	int i;
	int* x;
	int nx;

	cout << "��� ����: ";
	cin >> nx;

	x = new int[nx];
	cout << nx << "���� ������ �Է��ϼ���." << endl;

	for (i = 0; i < nx; ++i)
	{
		cout << "x[" << i << "]: ";
		cin >> x[i];
	}

	array_reverse(x, nx);
	cout << "�迭�� ��Ҹ� �������� �����߽��ϴ�." << endl;
	for (i = 0; i < nx; ++i)
		cout << "x[" << i << "] = " << x[i] << endl;

	delete x;


	return 0;
}