#include <iostream>

using namespace std;

inline int min(int x, int y)
{
	return x > y ? y : x;
}

int main()
{
	cout << min(5, 6) << endl;
	cout << min(3, 2) << endl;

	//inline이면 아래처럼 작동 --> 빠름
	//모든게 다 빨라지는건 아님
	//최근엔 쓴다고 빨라진다는 보장이 없음
	cout << (5>6?6:5) << endl;
	cout << (3>2?2:3) << endl;

	return 0;

}