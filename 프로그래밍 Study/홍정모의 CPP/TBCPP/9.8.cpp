#include <iostream>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0)
	{
		m_cents = cents;
	}

	int getCents() { return m_cents; }
	void setCents(int cents) { m_cents = cents; }

	operator int()
	{
		cout << "cast here" << endl;
		return m_cents;
	}
};

void printINT(const int& value)
{
	cout << value << endl;
}

class Dollar
{
private:
	int m_dollars = 0;

public:
	Dollar(const int & input): m_dollars(input){}

	operator Cents()
	{
		return Cents(m_dollars*100);
	}
};

int main()
{
	//Cents cents(8);
	//int value = (int)cents;
	//value = int(cents);
	//value = static_cast<int>(cents);
	//
	//printINT(cents);


	Dollar dol(2);
	Cents cents = dol;

	printINT(cents);

	return 0;
}