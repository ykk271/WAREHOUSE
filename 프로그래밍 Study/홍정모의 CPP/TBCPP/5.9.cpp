#include <iostream>
#include <cstdlib> // std::rand(), std::srand()
#include <ctime> //  std::time()
#include <random>

using namespace std;

unsigned int PRNG()
{
	static unsigned int seed = 5523;

	seed = 8253729 * seed + 239403;

	return seed % 32768;
}

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (RAND_MAX + 1.0);

	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}



int main()
{
	//for (int i = 1; i <= 100; i++)
	//{
	//	cout << PRNG() << "\t";

	//	if (i % 5 == 0) cout << endl;
	//}



//std:srand(5323); // 실행마다 같음 ==> 디버깅할때 사용
	//std::srand(static_cast<unsigned int>(std::time(0)));
	//for (int i = 1; i <= 100; i++)
	//{
	//	cout << std::rand() << "\t";

	//	if (i % 5 == 0) cout << endl;
	//}



	//for (int i = 1; i <= 100; i++)
	//{
	//	cout << getRandomNumber(1, 10) << "\t";

	//	if (i % 5 == 0) cout << endl;
	//}


	std::random_device rd;
	std::mt19937 mersenne(rd()); // creat a mesenne twister,
	std::uniform_int_distribution<> dice(1, 6);

	for (int count = 1; count <= 20; ++count)
		cout << dice(mersenne) << endl;

	return 0;


}