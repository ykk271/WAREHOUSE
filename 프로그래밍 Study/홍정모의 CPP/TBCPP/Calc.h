#pragma once
#include <iostream>
//��������� namespace �Ⱦ��°� ����
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

