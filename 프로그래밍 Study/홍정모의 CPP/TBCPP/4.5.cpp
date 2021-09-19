//����ȯ Type conversion
//���� �Ϳ��� ū ������ ���ϸ� ������

#include <iostream>
#include <typeinfo>
#include <iomanip> //setpercision ���

int main()
{
	using namespace std;

	//�Ͻ��� ����ȯ

	int a = 123.0;

	//nemeric promotion
	float c = 1.0f;
	double d = c;

	//numeric conversion
	int i = 30000;
	char j = i;

	cout << static_cast<int>(c) << endl;

	
	cout << typeid(4.0).name() << endl;
	cout << typeid(4).name() << endl;
	cout << typeid(a).name() << endl;


	double k = 0.12321541251256;
	float g = k;

	cout << std::setprecision(12)<< g << endl;
	
	float z = 3.99;
	int y = z;
	cout << y << endl; //�Ҽ��� �ڸ��� ����


	cout << 5u - 10u << endl; //unsigned int ��� �� ����
	// unsigned int �� int ���� �켱������ ���� ����

	/*�켱����
	long double
	double, float, unsigned long long, long long
	unsigned long, long, unsigned int, int
	*/


	//����� ����ȯ

	//����� ���� ����
	int i1 = int(4.0);  // c++ ��Ÿ��
	int i2 = (int)4.0; // c ��Ÿ��
	int i3 = static_cast<int>(4.0);

	return 0;
}
