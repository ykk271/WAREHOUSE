#pragma once
#include <iostream>
//헤더에서는 namespace 안쓰는게 좋음
class Calc
{
private:
	int m_value;

public:
	Calc(int init_value);

	Calc& add(int value);
	Calc& sub(int value);
	Calc& mul(int value);

	void print();
};

