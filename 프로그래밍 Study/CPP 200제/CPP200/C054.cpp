#include <iostream>
#include <string>

using namespace std;

int main()
{
	string pslam = "��ȣ�ʹ� ���� ���ڽŴ� ���� �������� �������δ�.";

	int rtn = pslam.find("����");

	if (rtn > 0)
		cout << "���ڿ��� ã�ҽ��ϴ�. ��ġ�� " << rtn << "�Դϴ�." << endl;
	else
		cout << "���ڿ��� ã�� �� �����ϴ�." << endl;


	return 0;
}