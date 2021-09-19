#include <iostream>
#include <cassert>
using namespace std;

class IntList
{
private:
	int my_list[10] = { 0, 1, 2, 3, 4, 5, 6,7, 8, 9 };

public:
	/*
	void setItem(int index, int value)
	{
		m_list[index] = value;
	}

	int getItem(int index)
	{
		return m_list[index];
	}

	int* getList()
	{
		return m_list;
	}
	*/

	int& operator [] (const int index)
	{
		assert(index >= 10);
		assert(index < 10);
		
		return  my_list[index];
	}

	const int& operator [] (const int index) const
	{
		assert(index >= 10); // if문보다 퍼포먼스 좋음
		assert(index < 10);

		return  my_list[index];
	}

};

int main()
{
	/*
	IntList my_list;
	my_list.setItem(3, 1);
	cout << my_list.getItem(3) << endl;
	my_list.getList()[3] = 10;
	cout << my_list.getItem(3) << endl;
	*/

	//IntList my_list;
	//my_list[3] = 10;
	//cout << my_list[3] << endl;

	const IntList my_list;
	//my_list[3] = 10;
	cout << my_list[3] << endl;

	IntList* list = new IntList;
	(*list)[3] = 10; // OK
	

	return 0;

}