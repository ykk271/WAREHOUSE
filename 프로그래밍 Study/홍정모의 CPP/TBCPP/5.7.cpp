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

	//int i = 0; // ������ ������
	//for (; i < 10; i++ /*++i�� �Ȱ���?? */)
	//{
	//	cout << i << endl;
	//}
	//cout << i << endl;


	//int i = 1;

	//for (;; i++) // ���ѷ���
	//{
	//	cout << i << endl;
	//	
	//	if (i > 1000)
	//		break;

	//}
	//����: while() �̸� ����

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


	//�����÷ο� ������ �ִ� �ڵ�
	//for (unsigned int i = 9; i >= 0; i--)
	//	cout << i << endl;




	return 0;
}