#pragma once

#include <vector>
#include "Student.h"
#include "Teacher.h"

class Lecture
{
private:
	std::string m_name;

	Teacher * teacher;
	std::vector<Student*> students;

public:
	Lecture(const std:: string & name_in)
		: m_name(name_in)
	{}

	~Lecture()
	{

	}

	void assignTeacher(Teacher * const teacher_input)
	{
		teacher = teacher_input;
	}

	void registerStudent(Student * const student_input)
	{
		students.push_back(student_input);
		//&student_input != student[0]
	}

	void Study()
	{
		std::cout << "Study" << std::endl << std::endl;

		//for (auto& element : students) //&안하면 값 업데이트 안됨
		//	element.setIntel(element.getIntel() + 1);

		for (auto& element : students) //Note : 'auto element' works
		{
			element->setIntel(element->getIntel() + 1);
			std::cout << "St5412521551" << std::endl << std::endl;
		}
		

		std::cout << "St5412521551" << std::endl << std::endl;

	}

	friend std::ostream& operator << (std::ostream& out, const Lecture& lecture)
	{
		out << "Lecture name: " << lecture.m_name << std::endl;

		out << lecture.teacher << std::endl;

		for (auto element : lecture.students)
			out << *element << std::endl;

		return out;
	}

};