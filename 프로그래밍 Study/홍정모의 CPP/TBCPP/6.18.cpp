#include <iostream>

using namespace std;

//void pointer, generic pointer
//���������� ��� X

enum Type
{
	INT,
	FLO,
	CHA,
};


int main()
{
	int i = 5;
	float f = 3.0;
	char c = 'a';

	void* ptr = nullptr;

	ptr = &i;
	ptr = &f;
	ptr = &c;

	//�Ұ�
	//cout << ptr + 1 << endl;

	cout << &f << " " << ptr << endl;
	//�Ұ�
	//cout << *ptr << endl;
	cout << static_cast<float*>(ptr) << endl;



	return 0;
}