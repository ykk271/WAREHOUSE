#include <iostream>
#include <string>
#include <vector>


using namespace std;

int PointerFunc(vector<string>* info)
{
	if (info->empty() == true)
		return 0;
	else
		return sizeof(info);
}




int main()
{
	vector<string> message;
	message.push_back("â����");
	message.push_back("��ֱ���");

	cout << "������ ���� ũ��: " << PointerFunc(&message) << endl;
	cout << "���� ���� ũ��: " << sizeof(message) << endl;

	return 0;
}