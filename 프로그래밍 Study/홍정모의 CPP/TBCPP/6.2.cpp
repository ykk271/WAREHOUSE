#include <iostream>

using namespace std;

void doSomething(int students_scores[20])
{
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << students_scores[3] << endl;
	cout << (int)&students_scores << endl;
	cout << sizeof(students_scores) << endl; //������ ������

}



int main()
{
	const int num_students = 20;

	int students_scores[num_students] = { 1, 2, 3, 4 };

	cout << (int)&students_scores << endl;
	cout << (int)&students_scores[0] << endl;
	cout << (int)&students_scores[1] << endl;
	cout << (int)&students_scores[2] << endl;
	cout << (int)&students_scores[3] << endl;
	cout << sizeof(students_scores) << endl;
	cout << "===========================" << endl;

	cout << (int)students_scores << endl; // = & (int)students_scores
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << students_scores[3] << endl;
	cout << (int)&students_scores << endl;
	cout << sizeof(students_scores) << endl;

	cout << endl;

	//�迭�� ù�� ° �ּ� ���� ����ȴ�.
	doSomething(students_scores);

	return 0;
}