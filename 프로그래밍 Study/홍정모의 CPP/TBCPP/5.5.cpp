//while문

#include <iostream>

using namespace std;

int main()
{
	//cout << "while-loop test" << endl;
	//int count = 0;
	//
	//while (true) //infinit loop
	//{
	//	//static int count = 0; // 굳이 while문 안에 넣으려면
	//	cout << count << endl;
	//	count++;

	//	if (count == 100) break;
	//}

	cout << " ============================= " << endl;

	//while (count < 10) //infinit loop
	//{
	//	cout << count << endl;
	//	count++;
	//}


	////overflow 발생
	//unsigned int x = 10;	

	//while (x >= 0) 
	//{
	//	if (x == 0) cout << "zero";
	//	else cout << x << endl;

	//	x--; 
	//}

	//딥러닝할때 많이 쓰는 트릭
	/*int count = 1;
	while (count < 100)
	{
		if (count % 5 == 0) cout << "Hello " << count << endl;
		count++;
	}*/

	int outer_count = 1;

	while (outer_count <= 5)
	{
		int inner_count = 1;
		while (inner_count <= outer_count)
		{
			cout << inner_count++ << " ";
		}

		cout << endl;
		++outer_count;
	}


	return 0;
}