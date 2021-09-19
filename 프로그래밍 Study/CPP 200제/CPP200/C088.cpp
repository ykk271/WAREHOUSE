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
	jungmyung.name = "정명";
	jungmyung.father = "선조";
	jungmyung.birthday = "0627";

	Goryeo[0].name = "선정";
	Goryeo[0].father = "성종";
	Goryeo[1].name = "효정";
	Goryeo[1].father = "현종";

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