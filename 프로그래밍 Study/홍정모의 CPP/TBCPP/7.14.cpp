#include <iostream>
#include <cassert>
#include <vector>

using namespace std;
//Debug 모드에서만 발생 함

void printValue(const std::vector<int>& a, const int& ix)
{
	assert(ix >= 0);
	assert(ix <= a.size() - 1);

	cout << a[ix] << endl;
}



int main()
{
	int number = 5;

		
	assert(number == 5);

	std::vector<int> a{1, 2, 3, 4, 5};
	
	printValue(a, 4);

	const int x = 5;

	assert(x == 5);

	static_assert(x == 5, "x should be 5"); 

	return 0;
}