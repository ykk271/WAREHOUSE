#include <iostream>

using namespace std;

//void pointer, generic pointer
//현실적으로 사용 X

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

	//불가
	//cout << ptr + 1 << endl;

	cout << &f << " " << ptr << endl;
	//불가
	//cout << *ptr << endl;
	cout << static_cast<float*>(ptr) << endl;



	return 0;
}