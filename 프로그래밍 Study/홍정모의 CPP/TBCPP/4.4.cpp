#include <iostream>

//형추론

//파라미터는 auto로 못함
//Template로 해결 가능
auto add(int x, int y)
{
	return x + y;
}
/*
auto add(int x, int y) -> int
깔끔한 정리를 위해


*/





int main()
{
using namespace std;

auto a = 123;
//초기화하지 않으면 auto 사용 불가
auto d = 123.0;

cout << 123 << endl;

auto result = add(1, 2);

return 0;
}