#include <iostream>
#include <string>


using namespace std;

int main()
{
	string king ="����";
	string friend1 = "�䳪��";
	string son = "�ַθ�";

	string king_info = "";

	king_info += king;
	king_info += friend1;
	king_info.append (son);

	cout << king_info << endl;

	return 0;
}