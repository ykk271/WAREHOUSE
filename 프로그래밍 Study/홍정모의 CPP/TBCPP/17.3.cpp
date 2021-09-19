#include <iostream>
#include <string>

using namespace std;

int main()
{
	//뒤에 null 없음
	string my_str("0123456");


	cout << std::boolalpha; // true false로 나오게
	cout << my_str.empty() << endl;
	cout << my_str.size() << endl;
	cout << my_str.size() << endl;
	cout << my_str.capacity() << endl; //여분의 용량을 둠	

	cout << my_str.max_size() << endl;

	my_str.reserve(1000); // 미리 메모리 용량 확보
	cout << my_str.capacity() << endl;


	return 0;
}