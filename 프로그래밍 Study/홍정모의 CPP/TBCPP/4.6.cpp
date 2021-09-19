//문자열 소개

#include <iostream>
#include <string>
#include <limits> //numeric_limits<std::streamsize>::max()

using namespace std;

int main()
{
	cout << "Hello, World" << endl;

	const string my_hello = "Hello, World";
	const char my_str[] = "Hello, World";
	cout << my_hello << endl;
	/// //////////////////////////////////////////
	cout << "Your age ? : ";
	int age;
	cin >> age;

	//std::cin.ignore(32767, '\n');
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	cout << "Your name ? : ";
	string name;
	std::getline(std::cin, name);

	cout << name << " "<< age << endl;

	/// //////////////////////////////////////////

	string a = "Hello";
	string b = "World!";
	string hw = a + b; // append
	
	hw += " I'm good";

	cout << hw << endl;	
	
	cout << a.length() << endl;


	/// //////////////////////////////////////////




	return 0;

}