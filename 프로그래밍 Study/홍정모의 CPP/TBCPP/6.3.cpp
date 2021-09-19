#include <iostream>

using namespace std;

int main()
{
	//���߿� �����Ҵ����� �ڵ�ȸ �ɰ���
	int students_scores[] = { 1, 2, 3, 4, 5 };

	//�Ķ���ͷ� �Ѿ array�� �� ������� �ȵ�
	const int num_students = sizeof(students_scores)/sizeof(int);

	int total_score = 0;

	for (int i = 0; i < num_students; ++i)
	{
		total_score += students_scores[i];
	}

	double avg_score = static_cast<double>(total_score)/num_students;

	cout << avg_score << endl;

	int max_score = 0;
	int min_score = 100;

	for (int i = 0; i < num_students; ++i)
	{
		total_score += students_scores[i];
		max_score = (max_score < students_scores[i]) ? students_scores[i] : max_score;
		min_score = (min_score > students_scores[i]) ? students_scores[i] : min_score;
	}

	cout << max_score << endl;
	cout << min_score << endl;



	return 0;
}