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

	virtual void speek() const = 0; // pure virtual function

	//virtual void speek() const
	//{
	//	cout << m_name << " ?? " << endl;
	//}
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

class Cow : public Animal
{
public:
	Cow(string name)
		: Animal(name)
	{}

	void speek() const
	{
		cout << m_name << " Mooooo" << endl;
	}

};

class IErrorLog
{
public:
	virtual bool reportError(const char* errorMessasge) = 0;
	virtual ~IErrorLog();
};

class FileErrorLog : public IErrorLog
{
public:
	bool reportError(const char* errorMessage) override
	{
		cout << "Writing error to a file" << endl;
		return true;
	}
};

class ConsolErrorLog : public IErrorLog
{
public:
	bool reportError(const char* errorMessage) override
	{
		cout << "Printing error to a console" << endl;
		return true;
	}
};

void Do(IErrorLog& log)
{
	log.reportError("Runtime error!!");
}

int main()
{
	//Animal animal("zoo"); // 오류
	
	Cat cat("C");
	Dog dog("D");
	Cow cow("W"); //자식에서 오버라이드 안해주면 사용 못함
	//cow.speek();

	FileErrorLog file_log;
	ConsolErrorLog console_log;

	Do(file_log);
	Do(console_log);

	return 0;
}