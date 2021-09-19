#include <iostream>
#include <vector>
#include <array>

using namespace std;

class IntArray
{
private:
	int m_length = 0;
	int* m_data = nullptr;

public:
	//Constructors
	//Destructors
	//initialize()
	//reset();
	//resize();
	//insertBefore(const int & value, const int & ix);
	//remove(const int & ix);
	//push_back(const int & value);
};

int main()
{
	/*
	IntArray arr{1, 3, 5 , 7, 9}
	arr.insertBofore(10, 1); //1, 10, 3, 5, 7, 9
	arr.remove(3) //1, 10, 3, 7, 9
	arr.push_back(13) //1. 10. 3. 7. 9. 13
	*/


	vector<int> int_vec;
	array<int, 10> int_arr;

	return 0;
}