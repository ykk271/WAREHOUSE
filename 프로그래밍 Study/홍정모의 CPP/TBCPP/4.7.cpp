//������ enumerated types

#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;


enum Color //���� head�� �ְ� ��
{
	BLACK = -1,
	RED = 5,
	WHITE = 5, // 5
	BLUE, //6
};

enum Feeling
{
	HAPPY = -1,
	UPSET,
	//BLUE, //���� �����̸��̶� ������ 
};


int main()
{
	Color paint = BLACK;
	Color house = RED;
	Color floor = WHITE;

	cout << UPSET << endl;

	int color_id = RED;

	cout << color_id << endl;

	Color my_color = static_cast<Color>(3);
	//ĳ���þ��� ���� ������ �ȵ�


	//cin ��� ��� 1
	int in_number;
	cin >> in_number;
	if (in_number == static_cast<Color>(0))
		my_color = static_cast<Color>(0);

	//cin ��� ��� 2
	string str_input;
	std::getline(cin, str_input);
	if (str_input == "COLOR_BLACK")
		my_color = static_cast<Color>(0);



	return 0;
}