#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
	const string file_name = "096.txt";

	ofstream file_out;
	file_out.open(file_name, ifstream::out);

	file_out << "여호와는 나의 목자시니" << endl;
	file_out << "내게 부족함이 없으리로다" << endl;

	file_out.close();

	ifstream file_in;
	file_in.open(file_name, ifstream::in);

	string line;

	while (getline(file_in, line))
		cout << line << endl;
	file_in.close();

	return 0;
}