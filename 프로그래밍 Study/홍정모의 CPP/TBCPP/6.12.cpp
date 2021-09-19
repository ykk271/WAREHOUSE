#include<iostream>

using namespace std;

int main()
{
	//int length;

	//cin >> length;

	////()뒤에 붙이면 0으로 초기화
	//int* array = new int[length]();

	//array[0] = 1;
	//array[1] = 2;

	//for (int i = 0; i < length; i++)
	//{
	//	cout << array[i] << " " << (uintptr_t)&array[i] << endl;
	//}

	//delete [] array;
	
	int fixedArray[5] = { 1, 2, 3, 4, 5 };
	
	int* array = new int[] {1, 2, 3, 4, 5};

	//resizing



	return 0;
}