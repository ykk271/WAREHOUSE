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
	//		break; // break가 없으면 뒤에있는거 다출력 // 의도적으로 사용하지 않는 경우도 있
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
		//int b = 5; // switch 문 안에서 선언은 되지만 값은 못넣음

	case 0:
		int y; // case 안에다 선언해도 case문 밖에서 선언한 것처럼 됨
		// 차라리 밖에다가 선언하는게 깔끔함
		break;
	case 1:
		y = 5;
		cout << y << endl;
		break;
	default:
		cout << "Undefined input " << x << endl;
		break; // 해줘도 되고 안해줘도 됨; 없는게 일반적임
	}

	

	return 0;
}