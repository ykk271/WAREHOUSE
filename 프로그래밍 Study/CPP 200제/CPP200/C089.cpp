#include <iostream>
#include <string>


using namespace std;

struct Princess
{
	string name;
	string father;
	string birthday;
} korea;

void Print(Princess *who)
{
	cout << "jungso.name = " << who->name << endl;
	cout << "jungso.father = " << who->father << endl;
	cout << "jungso.birthday = " << who->birthday << endl;
}


int main()
{
	korea.name = "����";
	korea.father = "����";
	korea.birthday = "1412";

	Print(&korea);

	return 0;
}