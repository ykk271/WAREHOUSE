#include <iostream>
#include <string>


using namespace std;

int main()
{
	string sentence = "i hate coding";

	sentence.erase(remove(sentence.begin(), sentence.end(), ' '), sentence.end());

	cout << sentence << endl;


	return 0;
}