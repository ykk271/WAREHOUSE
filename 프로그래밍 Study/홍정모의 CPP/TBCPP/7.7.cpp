#include <iostream>
#include <string>

using namespace std;

int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	return x + y;
}

void getRandom(int &x){}
void getRandom(double &x) {}

//����Ÿ������ �ν��ؼ� ���� �ȵ�
//typedef int my_int;
//void printf(int x){}
//void printf(my_int x){}

void print(char *value){}
void printf(int value){}

void printf(unsigned int value){}
void printf(float value){}

int main()
{
	//�Լ� �̸��� ���Ƶ� �Ķ���Ͱ� �ٸ��� �ٸ� �Լ��� �Ǵ�
	//�����϶� ������ �Ǿ�� ��
	add(1, 2);
	add(3.0, 4.0);

	//���ٷ� ������ �ϴ°� ����
	int x;
	getRandom(x);

	print(0);
	// print('a'); //���� 
	//print(3.14); //��ȣ�ؼ� ����
	printf(3.14f); //�����ȳ�
	//�⺻�����δ� �Լ��� ��Ȯ�ϰ� ����°� ����


	return 0;
}