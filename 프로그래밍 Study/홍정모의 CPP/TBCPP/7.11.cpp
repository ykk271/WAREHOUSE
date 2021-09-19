#include <iostream>
#include <vector>

using namespace std;

void printStack(const std::vector<int>& stack)
{
	for (auto& e : stack)
		cout << e << " ";
	cout << endl;
}

int main()
{
	// int *v_ptr = new int[3]{1, 2, 3};
	std::vector<int> v{ 1, 2, 3 };

	// size, capacity

	for (auto& e : v)
		cout << e << " ";
	cout << endl;

	
	cout << v.size() << " " << v.capacity() << endl;

	v.resize(10);
	cout << v.size() << " " << v.capacity() << endl;

	v.resize(2);
	cout << v.size() << " " << v.capacity() << endl;

	//cout << v[2] << endl; // ��Ÿ�� �ֶ�
	//cout << v.at(2) << endl; // ��Ÿ�� �ֶ�

	int* ptr = v.data();
	cout << ptr[2] << endl;

	//�޸� �뷮 �̸� Ȯ��
	//�ӵ� �ø��� ���ؼ�
	v.reserve(1024);

	for (unsigned int i = 0; i < v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;
	
	cout << " ==========================" << endl;
	std::vector<int> stack;

	stack.push_back(3);
	printStack(stack);
	stack.push_back(5);
	printStack(stack);
	stack.push_back(7);
	printStack(stack);
	stack.pop_back();
	printStack(stack);
	stack.pop_back();
	printStack(stack);
	stack.pop_back();
	printStack(stack);

	//������ reserve�� �ʹ� ũ�� �� ������ �޸𸮰� ���� ��

	return 0;
}