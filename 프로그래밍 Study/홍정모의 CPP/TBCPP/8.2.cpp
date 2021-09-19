#include <iostream>

using namespace std;

//class 는 private가 디폴트

class Date
{
public: //access sppecifier
	//setters
	void setDate(const int& month_input, const int& day_input, const int& year_input)
	{
		m_month = month_input;
		m_day = day_input;
		m_year = year_input;
	}

	void setMonth(const int& month_input)
	{
		m_month = month_input;
	}

	//getters
	const int getDay() // const로 막아놓는게 좋음
	{
		return m_day;
	}

	
	void copyFrom(const Date& original)
	{
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;
	}

private:
	int m_month;
	int m_day;
	int m_year;
};

int main()
{
	Date today;
	//today = { 8, 4, 2025 }; //에러
	today.setDate(8, 4, 2025);
	today.setMonth(10);

	//cout << today.m_date << endl; //에러
	cout << today.getDay() << endl;

	Date copy;
	copy.copyFrom(today);

	return 0;
}