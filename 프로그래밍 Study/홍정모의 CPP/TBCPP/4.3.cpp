//using�� �������� ���°� ���� �ʾ�..

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
	using namespace std; // �ѹ� �����ϸ� ������ ����ϴ� ����� ����
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