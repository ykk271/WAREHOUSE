#include <iostream>	
#include <vector>
#include <algorithm>
using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cents = 0) { m_cents = cents; }
	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; }

	friend bool operator == (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents == c2.m_cents;
	}

	friend std::ostream& operator << (std::ostream& out, const Cents& cents)
	{
		cout << cents.m_cents;
		return out;
	}

	//std sort 할떄는 왼쪽이 작은 오퍼레이터 만드러양함
	friend bool operator < (const Cents& c1, const Cents& c2)
	{
		return c1.m_cents < c2.m_cents;
	}

};

int main()
{
	Cents cents1(6);
	Cents cents2(6);

	if (cents1 == cents2)
	{
		cout << "Equal" << endl;
	}

	vector <Cents> arr(20);
	for (unsigned i = 0; i < 20; ++i)
		arr[i].getCents() = i;

	//std::random_device rd;
	//std::mt19937 g(rd());
	std::random_shuffle(arr.begin(), arr.end());

	for (auto& e : arr)
		cout << e << " ";
	cout << endl;

	std::sort(begin(arr), end(arr));

	for (auto& e : arr)
		cout << e << " ";
	cout << endl;



	return 0;
}