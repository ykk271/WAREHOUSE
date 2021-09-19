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
	//	if (i % 2 == 0) continue; // 아래부분을 실행시키지 않고 건너 뛰어버림
	//	cout << i << endl;
	//	//if (i % 2 == 1) cout << i << endl; // 같은 용법
	//}




	//int count = 0;

	//do
	//{
	//	if (count == 5)
	//		continue;

	//	cout << count << endl;

	//	count++;
	//} while (++ count < 10); // while(cout < 10)로하면 무한루프 걸림




	int i = 0;

	bool excape_flag = false;		

	while (!excape_flag)
	{
		char ch; // 효율성에 좋지 않음
		cin >> ch;

		cout << ch << " " << ++i << endl;

		if (ch == 'x')
			//excape_flag = true;
		break;
	}







	return 0;
}