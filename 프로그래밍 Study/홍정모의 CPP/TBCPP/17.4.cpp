#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string my_str("abcdefg");

	cout << my_str[0] << endl;
	my_str[4] = 'Z';
	cout << my_str[4] << endl;

	cout << my_str << endl;

	try
	{
		// my_str[100] = 'x'; //exception 발생 안함
		 my_str.at(100) = 'x'; 
	}
	catch (std::exception& e)
	{
		cout << e.what() << endl;
	}

	//string 문자열로 받기
	cout << my_str.c_str() << endl;

	//const char* arr = my_str.c_str(); //가져올 때는 맨 뒤에 null 붙여서 줌
	const char* arr = my_str.data(); // 위랑 같음
	cout << (int)arr[6] << endl;
	cout << (int)arr[7] << endl;


	char buf[20];
	my_str.copy(buf, 5, 1);
	buf[5] = '\0'; // 맨뒤에 널 넣음

	cout << buf << endl;

	return 0;	
}