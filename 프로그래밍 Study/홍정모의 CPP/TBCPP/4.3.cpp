//using은 전역에서 쓰는건 좋지 않아..

#include <iostream>

namespace a
{
	int var(10);
}

namespace b
{
	int var(20);
}

int main()
{
	using namespace std; // 한번 선언하면 선언을 취소하는 방법이 없음
	//using std::cout;
	//using std::endl;
	cout << "Hello" << endl;
		
	{
		using namespace a;
		cout << var << endl;
	}
	
	{
		using namespace b;
		cout << var << endl;
	}

	return 0;
}