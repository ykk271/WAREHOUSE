#include <iostream>
#include <string>


using namespace std;

struct Princess
{
	string name;
	string father;
	string birthday = "0825";
} Goryeo[2];

int main()
{
	Princess jungmyung;
	jungmyung.name = "����";
	jungmyung.father = "����";
	jungmyung.birthday = "0627";

	Goryeo[0].name = "����";
	Goryeo[0].father = "����";
	Goryeo[1].name = "ȿ��";
	Goryeo[1].father = "����";

	cout << jungmyung.name << endl;
	cout << jungmyung.father << endl;
	cout << jungmyung.birthday << endl;

	cout << endl;

	cout << Goryeo[0].name << endl;
	cout << Goryeo[0].father << endl;
	cout << Goryeo[1].name << endl;
	cout << Goryeo[1].father << endl;

	return 0;
}