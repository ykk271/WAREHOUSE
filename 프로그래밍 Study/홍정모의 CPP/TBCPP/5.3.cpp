#include <iostream>

using namespace std;

enum class Colors
{
	black,
	red,
	blue,
	green,
	pupple
};

void printColorName(Colors color)
{
	switch (color)
	{
	case Colors::black : 
		cout << "black" << endl;
		break;
	case Colors::red:
		cout << "red" << endl;
		break;
	case Colors::blue:
		cout << "blue" << endl;
		break;
	case Colors::green:
		cout << "green" << endl;
		break;
	case Colors::pupple:
		cout << "pupple" << endl;
		break;
	}
}

int main()
{
	printColorName(Colors::red);

	int x;
	cin >> x;
	//{
	//	switch (x)
	//	{
	//		
	//	case 0: 
	//		cout << "Zero";
	//		break; // break�� ������ �ڿ��ִ°� ����� // �ǵ������� ������� �ʴ� ��쵵 ��
	//	case 1: 
	//		cout << "One";
	//		break;
	//	case 2:
	//		cout << "Two";
	//		break;
	//	}

	//	cout << endl;
	//}

	cout << "======================" << endl;

	switch (x)
	{
		//int a;
		//int b = 5; // switch �� �ȿ��� ������ ������ ���� ������

	case 0:
		int y; // case �ȿ��� �����ص� case�� �ۿ��� ������ ��ó�� ��
		// ���� �ۿ��ٰ� �����ϴ°� �����
		break;
	case 1:
		y = 5;
		cout << y << endl;
		break;
	default:
		cout << "Undefined input " << x << endl;
		break; // ���൵ �ǰ� �����൵ ��; ���°� �Ϲ�����
	}

	

	return 0;
}