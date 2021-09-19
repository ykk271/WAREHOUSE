#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
	void SetName(string name)
	{
		name_ = name;
	}

	string Getname() const
	{
		return name_;
	}

private:
	string name_;
};



int main()
{
	KingInfo king_info;
	king_info.SetName("조선 세종");

	cout << king_info.Getname() << endl;

	return 0;
}

