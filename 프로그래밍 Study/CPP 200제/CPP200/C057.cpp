#include <iostream>
#include <string>


using namespace std;

int main()
{
	string king ="다윗";
	string friend1 = "요나단";
	string son = "솔로몬";

	string king_info = "";

	king_info += king;
	king_info += friend1;
	king_info.append (son);

	cout << king_info << endl;

	return 0;
}