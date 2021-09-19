#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
	int data1[10]{ 0, };
	fill_n(data1, 2, 10);
	fill_n(data1 + 4, 3, 20);
	
	for (int i = 0; i < 10; i++)
		cout << data1[i] << ", ";


	return 0;
}