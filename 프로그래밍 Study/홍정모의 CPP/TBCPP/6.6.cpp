#include <iostream>



using namespace std;

int main()
{
	//char myString[] = "string";

	//for (int i = 0; i < 7; ++i)
	//{
	//	cout << (int)myString[i] << endl;
	//}
	////null�� �� �ڿ� ����

	//cout << sizeof(myString) / sizeof(myString[0]) << endl;




	//char string2[255];
	
	//cin >> string2;

	//string2[0] = 'A';
	//string2[5] = '\0'; // null�� ������ ������ �����

	//cout << string2 << endl;

	//char myString[255];
	//cin.getline(myString, 255); //��ĭ��°���




	//char myString[255];
	//cin.getline(myString, 255);

	//int ix = 0;
	//while (true)
	//{
	//	if (myString[ix] == '\0') break;
	//	cout << myString[ix] << " " << (int)myString[ix] << endl;
	//	++ix;
	//}




	char source[] = "Copy this!";
	char dest[55]; // �� ���� �޸� �Ҵ��ϸ� ��Ÿ�ӿ��� ��
	strcpy_s(dest, 55, source);

	//cout << source << endl;
	//cout << dest << endl;

	//strcat() �ڿ��� �ѱ��� ����
	//strcmp() �� ���ڿ��� �������� ��

	strcat_s(dest, 55, source);

	cout << source << endl;
	cout << dest << endl;

	//������ 0����, �ٸ��� -1 ����
	cout << strcmp(source, dest) << endl;
	if (strcmp(source, dest) == 0)
	{
	}


	return 0;
}