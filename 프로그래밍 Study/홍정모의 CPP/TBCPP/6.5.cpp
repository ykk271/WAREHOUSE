#include <iostream>

using namespace std;

int main()
{
	const int num_rows = 3;
	const int num_columns = 5;

	//row major ���
	//int array[num_rows][num_columns] = 
	//{
	//	{1, 2, 3, 4, 6}, // row 0
	//	{6, 7, 8, 9, 10},	//row 1
	//	{11, 12, 13 ,14 ,15}, // row 2
	//};

	//�ʱ�ȭ��� 2
	//int array[][num_columns] = // num_columns�� ���� �ȵ�
	//{
	//	{1, 2, 3, 4,}, // row 0
	//	{6, 7, 8,},	//row 1
	//	{11, 12, }, // row 2
	//};

	//�ʱ�ȭ��� 3
	//int array[num_rows][num_columns] = { 0 };

	//3������ ����
	int array[5][4][3];


	//for (int row = 0; row < num_rows; ++row)
	//{
	//	for (int col = 0; col < num_columns; ++col)
	//	{
	//		//cout << '[' << row << ']' << '[' << col << ']' << '\t';
	//		cout << array[row][col] << '\t';
	//		//cout << (int)&array[row][col] << '\t';
	//	}

	//	cout << endl;
	//	cout << endl;
	//}



	return 0;	
}