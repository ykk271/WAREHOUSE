#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	for (int count = 0; count < argc; ++count)
	{
		std::string argv_single = argv[count];
		cout << argv_single << endl;

		if (count == 1)
		{
			int input_number = std::stoi(argv_single);
			cout << input_number + 1 << endl;
		}
		else
			cout << argv_single << endl;

		//cout << argv[count] << endl;
	}
	
	return 0;
}