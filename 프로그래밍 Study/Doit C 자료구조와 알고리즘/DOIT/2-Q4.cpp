#include <iostream>
#include <random>

using namespace std;

int maxof(const int a[], int n)
{
	int i;
	int max = a[0];
	for (i = 1; i < n; i++)
		if (a[i] > max) max = a[i];
	return max;
}

int main()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(100, 189);
	std::uniform_int_distribution<int> dis2(1, 10);

	int i;
	int* height;
	int number = dis2(gen);

	height = new int[number];

	for (i = 0; i < number; ++i)
	{
		height[i] = dis(gen);
		cout << "height[" << i << "]: " << height[i] << endl;
	}

	cout << "�ִ밪: " << maxof(height, number);

	delete[] height;

	return 0;
}