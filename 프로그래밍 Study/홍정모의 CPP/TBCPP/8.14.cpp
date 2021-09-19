#include <iostream>

using namespace std;

class Fruit
{
public:
	enum FruitType
	{
		apple,
		banana,
		cherry
	};

private:
	FruitType m_type;

public:
	Fruit(FruitType type) : m_type(type)
	{}

	FruitType getType() { return m_type; }
};

int main()
{
	Fruit Apple(Fruit::FruitType::apple);

	if (Apple.getType() == Fruit::FruitType::apple)
	{
		std::cout << "Apple" << std::endl;
	}

	return 0;
}