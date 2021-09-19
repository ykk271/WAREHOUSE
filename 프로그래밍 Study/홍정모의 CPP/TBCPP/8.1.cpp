#include <iostream>
#include <string>
#include <vector>

using namespace std;
// Object °´Ã¼
// Friend : name, address, age, height, weight, ...

struct Friend
{
	string name;
	string address;
	int	   age;
	double height;
	double weight;

	void print()
	{
		cout << name << " " << address << " " << age << " " << height << " "
			<< weight << endl;
	}

};


class Friend2
{
public: // access specifier
	string m_name; 
	string address;
	int	   age;
	double height;
	double weight;

	void print()
	{
		cout << m_name << " " << address << " " << age << " " << height << " "
			<< weight << endl;
	}
};

void print(const string& name, const string& address, const int& age,
	const double& height, const double& weight)
{
	cout << name << " " << address << " " << age << " " << height << " "
		<< weight << endl;
}

void print(const Friend &Fr)
{
	cout << Fr.name << " " << Fr.address << " " << Fr.age << " " << Fr.height << " "
		<< Fr.weight << endl;
}




int main()
{
	Friend kk{ "king", "123", 23, 190, 80 }; //instanciation, instance
	cout << &kk << endl;



	print(kk.name, kk.address, kk.age, kk.height, kk.weight);
	print(kk);

	Friend2 kk2{ "king", "123", 23, 190, 80 }; // class

	kk2.print();

	vector<Friend2> friends;
	friends.resize(3);

	friends[0] = { "king", "123", 23, 190, 80 };
	friends[1] = { "ring", "123", 23, 190, 80 };
	friends[2] = { "aing", "123", 23, 190, 80 };

	for (auto& e : friends)
		e.print();	

	/*vector<string> name_vec;
	vector<string> addr_vec;
	vector<int>	   age_vec;
	vector<double> height_vec;
	vector<double> weight_vec;

	print(name_vec[0], addr_vec[0], age_vec[0], height_vec[0], weight_vec[0]);*/



	return 0;
}