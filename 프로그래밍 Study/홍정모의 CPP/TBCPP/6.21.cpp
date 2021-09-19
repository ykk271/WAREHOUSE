#include <iostream>
#include <vector>

using namespace std;

//벡터는 메모리를 알아서 지워줌

int main()
{
	//std::array<int,5>array;
	vector<int> array;

	cout << array.size() << endl;

	vector<int> array2 = { 1, 2, 3, 4 ,5 };

	cout << array2.size() << endl;

	vector<int> array3 { 1, 2, 3, 4 ,5 };

	cout << array3.size() << endl;

	vector<int> arr = { 1,2,3,4,5 };
	arr.resize(10);

	for (auto& itr : arr)
		cout << itr << " ";
	cout << endl;

	cout << arr[1] << endl;
	cout << arr.at(1) << endl;

	
	return 0;
}