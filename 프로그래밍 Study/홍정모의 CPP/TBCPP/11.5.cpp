#include <iostream>
using namespace std;

class Base
{
public:
	int m_public;
protected:
	int m_protected;
private:
	int m_private;
};

class Derived_public : public Base
{
public:
	Derived_public()
	{
		m_public = 123;
		m_protected = 123;
		//m_private = 123; //X
	}
};

class Derived_protected : protected Base
{
public:
	Derived_protected()
	{
		m_public = 123;
		m_protected = 123;
		//m_private = 123; //X
	}
};


class Derived_private: private Base
{
public:
	Derived_private()
	{
		m_public = 123;
		m_protected = 123;
		//m_private = 123; //X
	}
};

class GrandChild : public Derived_private
{
public:
	GrandChild()
	{
		//m_protected = 123; //X
	}
};


int main()
{
	//Base base;

	//base.m_public = 123;
	//base.m_protected = 123; //X
	//base.m_private = 123; //X


	Derived_public derived_public;
	derived_public.m_public = 123;
	//derived_public.m_protected = 123; //X
	//derived_public.m_private = 123; //X

	Derived_protected derived_protected;
	//derived_protected.m_public = 123; //X
	//derived_protected.m_protected = 123; //X
	//derived_protected.m_private = 123; //X



	return 0;
}