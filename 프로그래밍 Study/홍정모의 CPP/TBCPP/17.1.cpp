#include <iostream>
#include <string>

using namespace std;

int main()
{
	//c스타일
	{
		char* strHello = new char[7];
		strcpy_s(strHello, sizeof(char) * 7, "Hello!");
		std::cout << strHello << std::endl;

	}

	//basic_string<>, stirng, wstring
	{
		std::string string;
		std::wstring wstring;

		wchar_t wc; //unsigned short
		//wide character/unicode 등 표현할 때 사용


	}

	return 0;
}