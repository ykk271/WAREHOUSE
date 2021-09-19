#include <iostream>

using namespace std;

int main()
{
	//나중엔 동적할당으로 자동회 될거임
	int students_scores[] = { 1, 2, 3, 4, 5 };

	//파라미터로 넘어간 array는 이 방법으로 안됨
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