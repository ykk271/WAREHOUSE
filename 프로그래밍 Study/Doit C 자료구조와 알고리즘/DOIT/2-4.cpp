#include <iostream>

using namespace std;

int main()
{
	int i;
	int* a;
	int na;
	cout << "��Ұ���: ";
	cin >> na;

	a = new int[na];

	if (a == NULL)
		cout << "�޸� Ȯ���� �����߽��ϴ�.";
	else
	{
		cout << "na���� ������ �Է��ϼ���." << endl;
		for (i = 0; i < na; ++i)
		{
			cout << "a[" << i << "]: ";
			cin >> a[i];			
		}

		cout << "�� ��ڰ��� �Ʒ��� �����ϴ�." << endl;
		for (i = 0; i < na; ++i)
			cout << "a[" << i << "]: " << a[i] << endl;

		delete a;
	}



	return 0;
}