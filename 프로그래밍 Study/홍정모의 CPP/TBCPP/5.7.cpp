#include <iostream>

using namespace std;

int pow(int base, int exponent)
{
	int result = 1;

	for (int count = 0; count < exponent; ++count)
		result *= base;

	return result;
}



int main()
{

	//int i = 0; // 밖으로 뺴도됨
	//for (; i < 10; i++ /*++i랑 똑같네?? */)
	//{
	//	cout << i << endl;
	//}
	//cout << i << endl;


	//int i = 1;

	//for (;; i++) // 무한루프
	//{
	//	cout << i << endl;
	//	
	//	if (i > 1000)
	//		break;

	//}
	//참고: while() 이면 에러

	/*cout << pow(2, 10) << endl;
		
	for (int count = 9; count >= 0; count -= 2)
	{
		cout << count << endl;
	}

	for (int i = 0, j = 0; i+j<10; ++i, j--)
	{
		cout << i << " " << j << endl;
		if (i > 100)
			break;
	}*/


	//for (int j = 0; j < 9; j++)
	//	for (int i = 0; i < 9; i++)
	//	{
	//		cout << i << " " << j << endl;
	//	}


	//오버플로우 문제가 있는 코드
	//for (unsigned int i = 9; i >= 0; i--)
	//	cout << i << endl;




	return 0;
}