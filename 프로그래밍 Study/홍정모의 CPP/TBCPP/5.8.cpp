#include <iostream>

using namespace std;

void vreakOrReturn()
{
	while (true)
	{
		char ch;
		cin >> ch;

		if (ch == 'b')
			break;
		if (ch == 'r')
			return;		
	}

	cout << "Hello" << endl;
}


int main()
{

	//vreakOrReturn();




	//for (int i = 0; i < 10; ++i)
	//{
	//	cout << i << endl;
	//	if (i == 5) break;
	//}




	//for (int i = 0; i < 10; ++i)
	//{
	//	if (i % 2 == 0) continue; // �Ʒ��κ��� �����Ű�� �ʰ� �ǳ� �پ����
	//	cout << i << endl;
	//	//if (i % 2 == 1) cout << i << endl; // ���� ���
	//}




	//int count = 0;

	//do
	//{
	//	if (count == 5)
	//		continue;

	//	cout << count << endl;

	//	count++;
	//} while (++ count < 10); // while(cout < 10)���ϸ� ���ѷ��� �ɸ�




	int i = 0;

	bool excape_flag = false;		

	while (!excape_flag)
	{
		char ch; // ȿ������ ���� ����
		cin >> ch;

		cout << ch << " " << ++i << endl;

		if (ch == 'x')
			//excape_flag = true;
		break;
	}







	return 0;
}