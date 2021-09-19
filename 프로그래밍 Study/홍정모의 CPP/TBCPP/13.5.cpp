#include <iostream>
#include <array>
#include "Storage8.h"

using namespace std;

template<typename T>
class A
{
public:
	A(const T& input)
	{}

	void Do()
	{
		cout << typeid(T).name() << endl;
	}

	void test()
	{}
};

template<>
class A<char>
{
public:
	A(const char & tmp)
	{}

	void Do()
	{
		cout << "char type specialization" << endl;
	}
};

int main()
{
	//A<int>		a_int(1);
	//A<double>	a_double(3.12);
	//A<char>		a_char('a');

	// c++17에서 가능
	A	a_int(1);
	A	a_double(3.12);
	A	a_char('a');


	a_int.test();
	a_double.test();
	//a_char.test(); //오류 

	a_int.Do();
	a_double.Do();
	a_char.Do();

	Storage8<int> intStorage;

	for (int count = 0; count < 8; ++count)
		intStorage.set(count, count);

	for (int count = 0; count < 8; ++count)
		std::cout << intStorage.get(count) << '\n';

	cout << "Sizeof Storage8<int>" << sizeof(Storage8<int>) << '\n';

	return 0;
}