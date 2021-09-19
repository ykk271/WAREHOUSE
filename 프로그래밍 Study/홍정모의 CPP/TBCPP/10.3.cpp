#include <iostream>
#include <vector>
#include <string>
#include "Lecture.h"



int main()
{
	using namespace std;

	Student *std1 = new Student("JJ, 0");
	Student *std2 = new Student("DD, 1");
	Student *std3 = new Student("VV, 2");

	Teacher *teacher1 = new Teacher("Prof. Hong");
	Teacher *teacher2 = new Teacher("Prof. King");

	////Composition Relationship
	//Lecture lec1("Introduction to Computre Programming");
	//lec1.assignTeacher(Teacher("Prof. Hong"));
	//lec1.registerStudent(Student("JJ", 0));
	//lec1.registerStudent(Student("DD", 1));
	//lec1.registerStudent(Student("VV", 2));

	//Lecture lec2("Computational Thinking");
	//lec1.assignTeacher(Teacher("Prof. King"));
	//lec1.registerStudent(Student("JJ", 0));


	Lecture lec1("Introduction to Computre Programming");
	lec1.assignTeacher(teacher1);
	lec1.registerStudent(std1);
	lec1.registerStudent(std2);
	lec1.registerStudent(std3);

	Lecture lec2("Computational Thinking");
	lec2.assignTeacher(teacher2);
	lec2.registerStudent(std1);

	{
		cout << lec1 << endl;
		cout << lec2 << endl;

		lec2.Study();

		cout << lec1 << endl;
		cout << lec2 << endl;
	}

	delete std1;
	delete std2;
	delete std3;
	delete teacher1;
	delete teacher2;


	return 0;
}