#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

//void printLength(array<int, 5> my_arr)
void printLength(const array<int, 5>& my_arr)
{
	cout << my_arr.size() << endl;
}

int main()
{
	array<int, 5> my_arr = { 16, 2, 33, 4, 56216 };

	//cout << my_arr[1] << endl;
	//cout << my_arr.at(1) << endl; //예외처리에서 쓰임

	cout << my_arr.size() << endl;
	printLength(my_arr);	
	
	for (auto &element : my_arr)
		cout << element << " ";
	cout << endl;
		
	sort(my_arr.begin(), my_arr.end());
	for (auto& element : my_arr)
		cout << element << " ";
	cout << endl;

	sort(my_arr.rbegin(), my_arr.rend());
	for (auto& element : my_arr)
		cout << element << " ";
	cout << endl;

	return 0;
}