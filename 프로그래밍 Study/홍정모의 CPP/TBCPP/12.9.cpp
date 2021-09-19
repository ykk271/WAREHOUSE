#include <iostream>
#include <vector>
#include <functional>
using namespace std;

class B
{
private:
	

public:
	int m_i = 0;

	virtual void print()
	{
		cout << "B" << endl;
	}

};

class D : public B
{
public:
	int m_j = 1;

	virtual void print() override
	{
		cout << "D" << endl;
	}
};

void Do (B & b)
{
	b.print();
}


int main()
{
	//D d;
	//B& b = d;
	//
	//b.print();

	//Do(d);

	B b;
	D d; 

	//vector<B*> my_vec;
	//
	//my_vec.push_back(&b);
	//my_vec.push_back(&d);

	//for (auto& ele : my_vec)
	//	ele->print();

	//vetor<Base&> my_vec;
	vector<std::reference_wrapper<B>> my_vec;
	my_vec.push_back(b);
	my_vec.push_back(d);

	for (auto& ele : my_vec)
		ele.get().print();



	return 0;
}