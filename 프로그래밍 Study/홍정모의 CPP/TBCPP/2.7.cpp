#include <iostream>
#include <limits>

int main()
{
	using namespace std;

	char c1 = 65;

	cin >> c1;
	cout << static_cast<int>(c1) << endl;
	
	cin >> c1;
	cout << static_cast<int>(c1) << endl;
	
	cout << (int)std::numeric_limits<char>::max() << endl;
	cout << (int)std::numeric_limits<char>::lowest() << endl;

	cout << int('\n') << endl;

	return 0;
}