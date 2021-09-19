#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

template <typename T>
std::string ToString(T x)
{
	std::ostringstream osstream;

	osstream << x;
	return osstream.str();
}

template <typename T>
bool FromString(const std::string& str, T& x)
{
	std::istringstream isstream(str);

	return (isstream >> x) ? true : false;
}

int main()
{
	//std::string mt_string("my string");
	//const char* my_string = "my string";

	//std::vector<char> vec;
	//for (auto e : "To day is good day.")
	//	vec.push_back(e);

	//std::string second_string(vec.begin(), std::find(vec.begin(), vec.end(), 'y'));

	//std::cout << second_string << std::endl;



	std::string my_str(std::to_string(4));

	my_str += std::to_string(1234);

	int i = std::stoi(my_str);
	int f = std::stof(my_str);

	std::cout << my_str << std::endl;
	std::cout << i << std::endl;
	std::cout << f << std::endl;

	std::string Test_string = ToString("asdsa");
	double d;

	if (FromString(Test_string, d))
	cout << d << endl;
	else
		cout << "Cannot covet" << endl;

	return 0;
}

