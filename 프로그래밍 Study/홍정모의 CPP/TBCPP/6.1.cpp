#include <iostream>

using namespace std;

struct Rectangle
{
	int length;
	int width;
};

enum StudentName
{
	A, // = 0
	B, // = 1
	C, // = 2
	Num_Students, // = 3
};

int main()
{
	int one_student_score; // 1 variable
	int student_scores[5]; // 5 int

	//cout << sizeof(one_student_score) << endl;
	//cout << sizeof(student_scores) << endl;
	
	one_student_score = 100;

	student_scores[0] = 100;	// 1st element
	student_scores[1] = 99;		// 2nd element
	student_scores[2] = 30;		// 3rd element
	student_scores[3] = 50;		// 4th element
	student_scores[4] = 80;		// 5th element
	//student_scores[5] = 80; // ��Ÿ�ӿ�����

	//cout << student_scores[5] << endl;

	cout << sizeof(Rectangle) << endl;

	Rectangle rect_arr[10];
	cout << sizeof(rect_arr) << endl;

	rect_arr[0].length = 1;
	rect_arr[0].width = 2;

	cout << "======================" << endl;

	//�迭 �ʱ�ȭ

	int my_array1[5] = { 1, 2, 3, 4, 5 };
	
	cout << my_array1[3] << endl;
	cout << my_array1[A] << endl;

	int my_array2[5] = { 1, 2, 3, 4};

	cout << my_array2[3] << endl;

	int my_array3[] = { 1, 2, 3, 4, 5};
	cout << my_array3[3] << endl;

	int my_array4[]{ 1, 2, 3, 4, 5};
	cout << my_array4[3] << endl;

	int students_score[Num_Students];

	students_score[A] = 1;
	students_score[B] = 100;

	//int Number = 10;
	//cin >> Number;
	//int Test[Number]; // ��Ÿ�ӿ� ���� �ɋ� ��� �Ұ�
	// ��ũ�η� �� �� ����
	//�Ʒ�ó�� �ؾߵ�
	const int Number = 10;
	int Test[Number];


	return 0;
}