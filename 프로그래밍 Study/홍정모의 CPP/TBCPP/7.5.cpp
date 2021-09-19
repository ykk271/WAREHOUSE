#include <iostream>
#include <array>
#include <tuple>

using namespace std;




int getValue(int x)
{
	int value = x * 2;
	return value;
}

int* getValue2(int x)
{
	int value = x * 2;
	return &value;
}

int& getValue3(int x)
{
	int value = x * 2;
	return value;
}

int& get(std::array<int, 100>& my_array, int ix)
{
	return my_array[ix];
}


int* allocateMomory(int size)
{
	return new int[size];
}

struct S
{
	int a, b, c, d;
};

S getStruct()
{
	S my_s{ 1, 2, 3, 4 };

	return my_s;
}

std::tuple<int, double> getTuple()
{
	int a = 10;
	double d = 3.14;
	return std::make_tuple(a, d);

}

int main()
{
	//int value = getValue(3);

	//int *value = getValue2(3); // 권장안됨
	//cout << *value << endl;

	//int* array = new int[1024];
	//delete[] array;

	//int& value = getValue3(5); //좋지 못한 사용
	//cout << value << endl;
	//cout << value << endl; // 두번째때 문제가 생김

	////but 아래처럼 쓰면 좋음
	//std::array<int, 100> my_array;
	//my_array[30] = 10;
	//get(my_array, 30) = 1024;
	//cout << my_array[30] << endl;

	////리턴값 여러개 받고싶을 떄
	//S my_s = getStruct();
	//my_s.b;

	//cout << " =====================" << endl;
	//std::tuple<int, double> my_tp = getTuple();
	//cout << std::get<0>(my_tp) << endl;
	//cout << std::get<1>(my_tp) << endl;
	
	
	//아래가 더 편함, c++17에서 가능

	auto [a, d] = getTuple();


	cout << a << endl;
	cout << d << endl;
	


	return 0;
}