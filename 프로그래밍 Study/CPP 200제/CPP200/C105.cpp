#include <iostream>
#include <string>


using namespace std;

class KingInfo
{
public:
	KingInfo()
	{
		name_ = "���� ���� ��Ȳ";
	};

public:
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

	cout << king_info.Getname() << endl;


	return 0;
}

