#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream ifs("test.csv");

	stringstream ss;

	ss << ifs.rdbuf();
	ifs.close();

	string read = "";

	while (!ss.eof())
	{
		ss >> read;
		
	}

	read = ss.str();

	cout << endl << read << endl;


	return 0;
}