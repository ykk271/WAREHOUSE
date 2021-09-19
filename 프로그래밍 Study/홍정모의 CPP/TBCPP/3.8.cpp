#include <iostream>
#include <bitset>

using namespace std;

int main()
{

	/*
	<< left shift
	>> right shift
	~ not
	& and
	x or
	^ xor
	*/

	unsigned int a = 3;

	cout << std::bitset<8>(a) << endl;

	unsigned int b = a << 3;
	cout << std::bitset<4>(b) << " ";
	cout << b << endl;

	// 2의 n승을 곱하고 싶을 때 shife operator를 쓰면 더 빠르게 처리 가능

	unsigned int c = 1024;

	cout << std::bitset<16>(c) << endl;
	cout << std::bitset<16>(c>>1) << " " << (c>>1) << endl;

	cout << std::bitset<16>(~a) << " " << (~a) << endl;

	unsigned int d = 0b1100;
	unsigned int e = 0b0110;

	cout << d << " " << e << endl;

	cout << std::bitset<4>(d & e) << endl;
	cout << std::bitset<4>(d | e) << endl;
	cout << std::bitset<4>(d ^ e) << endl;
	
	a &= b; // a = a & b;



	return 0;
}