#include <iostream>
#include <string>

using namespace std;

int main()
{
	//�ڿ� null ����
	string my_str("0123456");


	cout << std::boolalpha; // true false�� ������
	cout << my_str.empty() << endl;
	cout << my_str.size() << endl;
	cout << my_str.size() << endl;
	cout << my_str.capacity() << endl; //������ �뷮�� ��	

	cout << my_str.max_size() << endl;

	my_str.reserve(1000); // �̸� �޸� �뷮 Ȯ��
	cout << my_str.capacity() << endl;


	return 0;
}