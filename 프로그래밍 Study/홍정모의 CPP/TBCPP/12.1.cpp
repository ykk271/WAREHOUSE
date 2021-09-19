#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	string m_name;

public:
	Animal(std::string name)
		: m_name(name)
	{}

public:
	string getName() { return m_name; }
	
	virtual void speek() const
	{
		cout << m_name << " ?? " << endl;
	}
};

class Cat : public Animal
{
public:
	Cat(string name)
		: Animal(name)
	{}

	void speek() const
	{
		cout << m_name << " Meow" << endl;
	}
};


class Dog : public Animal
{
public:
	Dog(string name)
		: Animal(name)
	{}

	void speek() const
	{
		cout << m_name << " Woof" << endl;
	}
};

int main()
{
	Animal animal("zoo");
	Cat cat("C");
	Dog dog("D");
	
	animal.speek();
	cat.speek();
	dog.speek();
	
	Animal* ptr_animal1 = &cat;
	Animal* ptr_animal2 = &dog;

	ptr_animal1->speek();
	ptr_animal2->speek();

	Cat cats[] = { Cat("c1"), Cat("c2"), Cat("c3"), Cat("c4") };
	Dog dogs[] = { Dog("d1"), Dog("d2"), Dog("d3"), Dog("d4") };

	for (int i = 0; i < 4; ++i)
		cats[i].speek();

	cout << endl;

	Animal* my_animals[] = {&cats[0], &cats[1], &cats[2], &cats[3],
							&dogs[0], &dogs[1], &dogs[2], &dogs[3]};

	for (int i = 0; i < 8; ++i)
		my_animals[i]->speek();

	return 0;
}