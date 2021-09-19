#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sentence = "i love coding";

	string find_str = "love";
	string replace_str = "hate";

	sentence.replace(sentence.find(find_str), find_str.length(), replace_str);

	cout << sentence << endl;

	return 0;
}