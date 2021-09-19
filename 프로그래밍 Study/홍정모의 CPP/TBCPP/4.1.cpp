#include <iostream>

//namespace work11
//{
//
//	namespace work111
//	{
//		namespace work1111
//		{
//
//			int a = 1;
//			void Do()
//			{
//				a += 3;
//			}
//		}
//	}
//}


namespace work11::work111::work1111 //c++17
{
				int a = 1;
			void Do()
			{
				a += 3;
			}
}







namespace work1
{

	int a = 1;
	void Do()
	{
		a += 3;
	}

}

namespace work2
{
	int a = 2;
	void Do()
	{
		a += 5;
	}
}

int main()
{
	using namespace std;

	int apple = 5;


	{
		int apple = 1; // 가급적 이름을 다르게
		cout << apple << endl;
	} // 객체지향에서는 변수 지속기간을 짧게

	cout << apple << endl;

	cout << "========================" << endl;

	work11::work111::work1111::Do();

	return 0;
}

// apple = 3;