#include <iostream>
#include <string>

using namespace std;

int main()
{
	string pslam = "여호와는 나의 목자신니 내게 부족함이 없으리로다.";

	int rtn = pslam.find("목자");

	if (rtn > 0)
		cout << "문자열을 찾았습니다. 위치는 " << rtn << "입니다." << endl;
	else
		cout << "문자열을 찾을 수 없습니다." << endl;


	return 0;
}