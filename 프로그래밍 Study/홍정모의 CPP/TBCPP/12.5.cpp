#include <iostream>
using namespace std;

int add(int x, int y)
{
	return x + y;
};

int sub(int x, int y)
{
	return x - y;
}

int mult(int x, int y)
{
	return x * y;
}

int main()
{
	int x, y; 
	cin >> x >> y;

	int op;
	cout << "0: add, 1: sub, 2: mult" << endl;
	cin >> op;

	//int result;
	//switch (op)
	//{
	//case 0: result = add(x, y); break;
	//case 1: result = sub(x, y); break;
	//case 2: result = mult(x, y); break;
	//}

	//cout << result << endl;


	//dynamic binding
	int(*func_ptr)(int, int) = nullptr;
	switch (op)
	{
		case 0: func_ptr = add; break;
		case 1: func_ptr = sub; break;
		case 2: func_ptr = mult; break;
	}

	cout << func_ptr(x, y) << endl;


	return 0;
}