#include <iostream>

//���߷�

//�Ķ���ʹ� auto�� ����
//Template�� �ذ� ����
auto add(int x, int y)
{
	return x + y;
}
/*
auto add(int x, int y) -> int
����� ������ ����


*/





int main()
{
using namespace std;

auto a = 123;
//�ʱ�ȭ���� ������ auto ��� �Ұ�
auto d = 123.0;

cout << 123 << endl;

auto result = add(1, 2);

return 0;
}