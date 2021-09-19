#include <iostream>
#include <array>
#include <functional>

using namespace std;

bool isEven(const int& number)
{
	if (number % 2 == 0) return true;
}

bool isOdd(const int& number)
{
	if (number % 2 != 0) return true;
}

int func(int x)
{
	return 5;
}

int goo()
{
	return 10;
}
//�Լ������͵� Ÿ�Ե��������� �ٿ��� ��� ����
//typedef bool (*check_fun_t)(const int&);
using check_fun_t = bool(*)(const int&);

//void printfNumbers( const array<int, 10>& my_array,
//	check_fun_t check_fun  = isEven)
	void printfNumbers(const array<int, 10>& my_array,
		std::function<bool(const int&)> check_fun)
{
	for (auto element : my_array)
	{
		if (check_fun(element) == true) cout << element << " ";
		/*if (!print_even && element % 2 == 1) cout << element << " ";*/
	}

	cout << endl;
}

int main()
{
	//�Լ��� ��������
	//cout << func << endl;

	//int (*funcptr)(int) = func;

	//cout << funcptr(1) << endl;
	
	// funcptr = goo; // �Ű������� ����Ÿ���� ������� ��� ������

	//cout << funcptr() << endl;

	std::array<int, 10> my_array = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	std::function<bool(const int&)> funptr = isEven;

	printfNumbers(my_array, funptr);
	funptr = isOdd;
	printfNumbers(my_array, isOdd);

	return 0;
}