#include <iostream>
#include <vector>

using namespace std;

//벡터는 메모리를 알아서 지워줌

int main()
{
	
	

	int a;
	cin >> a;

	vector<int> array(a);

	cout << array.size() << endl;

	array[5] = 10;

	cout << array.size() << endl;

	return 0;
}