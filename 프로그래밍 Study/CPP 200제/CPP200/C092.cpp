#include <iostream>
#include <string>


using namespace std;

struct Info
{
	string country;

	struct who
	{
		string name;
		string nickname;
	}who;
};

int main()
{
	Info chuck = { "���", {"ô�ذ�", "�Ҹ�"} };

	cout << chuck.country << ", " << chuck.who.name << ", " << chuck.who.nickname << endl;


	return 0;
}