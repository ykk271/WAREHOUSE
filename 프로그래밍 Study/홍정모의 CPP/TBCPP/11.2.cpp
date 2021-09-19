#include <iostream>
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main()
{
	Student std("Jack Jack");
	std.setName("Venti");
	std::cout << std.getName() << endl;

	Teacher teacher("Dr. H");
	teacher.setName("Dr. Jone");

	std::cout << teacher.getName() << endl;

	std::cout << std << std::endl;
	std::cout << teacher << std::endl;
	
	std.doNothing();
	teacher.doNothing();

	return 0;
}