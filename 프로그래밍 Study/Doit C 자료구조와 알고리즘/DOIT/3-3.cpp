#include <iostream>

using namespace std;

int search(int a[], int n, int key)
{
	int i = 0;
	a[n] = key;
	while (true)
	{
		if (a[i] == key)
			break;

		i++;
	}

	return i == n ? -1 : i;
}

int main()
{
	int i, nx, ky, idx;
	int* x;
	cout << "�����˻�(���ʹ�)" << endl;
	cout << "��� ����: "; cin >> nx;
	x = new int[nx+1];
	for (i = 0; i < nx; i++)
	{
		cout << "x[" << i << "]: ";
		cin >> x[i];
	}
	cout << "�˻� ��: ";
	cin >> ky;
	idx = search(x, nx, ky);
	if (idx == -1)
		cout << "�˻��� �����߽��ϴ�";
	else
		cout << ky << "���� [" << idx << "]�� �ֽ��ϴ�.";

	delete[] x;

	return 0;
}