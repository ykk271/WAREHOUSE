#include <iostream>

using namespace std;

int search(const int a[], int n, int key)
{
	int i = 0;
	while (true)
	{
		if (i == n)
			return -1;
		if (a[i] == key)
			return i;

		i++;
	}
}

int main()
{
	int i, nx, ky, idx;
	int* x;
	cout << "�����˻�" << endl;
	cout << "��Ұ���: ";
	cin >> nx;
	x = new int[nx];
	for (i = 0; i < nx; i++)
	{
		cout << "x[" << i << "]: ";
		cin >> x[i];
	}

	cout << "�˻� ��: ";
	cin >> ky;
	idx = search(x, nx, ky);
	if (idx == -1)
		cout << "�˻��� �����߽��ϴ�." << endl;
	else
		cout << ky << "(��)�� " <<"x[" << idx << "]�� �ֽ��ϴ�";
	
	delete[] x;

	return 0;
}