#include <iostream>

using namespace std;

void printArray(const int array[], const int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}



int main()
{
	/*			value   index
	3 5 2 1 4
	1 5 2 3 4
	1 2 5 3 4
	1 2 3 5 4
	1 2 3 4 5
	*/



	const int length = 9;
	int array[length] = { 3, 5, 2, 1, 4, 10, 11, 2, 13 };

	printArray(array, length);

	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{
		int smallestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (array[smallestIndex] < array[currentIndex])
			{
				smallestIndex = currentIndex;
			}
		}

		{
		//swap
			int tmp = array[smallestIndex];
			array[smallestIndex] = array[startIndex];
			array[startIndex] = tmp;
			//std::swap(array[smallestIndex], array[startIndex]);
		}

		printArray(array, length);

	}

	return 0;
}