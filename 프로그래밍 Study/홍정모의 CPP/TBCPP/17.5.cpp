#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1 = "one";
	string str2;
	str2 = str1;
	str2 = "two";
	str2.assign("two").append(" three"); //chaining
	str2.assign("two");
	cout << str2 << endl;

	std::swap(str1, str2);
	cout << str1 << " " << str2 << endl;

	str1.swap(str2);
	cout << str1 << " " << str2 << endl;

	str1.append(" three");
	str1 += " three";
	cout << str1 << endl;

	str1.push_back('a'); // 글자 하나만 됨
	cout << str1 << endl;

	string str("aaaa");
	str.insert(2, "bbbbbbbb");
	cout << str << endl;

	return 0;
}