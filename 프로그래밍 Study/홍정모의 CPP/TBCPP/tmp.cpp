#include <iostream>
#include <vector>

using namespace std;

//���ʹ� �޸𸮸� �˾Ƽ� ������

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