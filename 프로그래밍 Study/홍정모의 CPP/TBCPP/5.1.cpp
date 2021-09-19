//제어 흐름 개요 - 중단

#include <iostream>
#include <cstdlib> // exit 사용 시
int main()
{

	std::cout << "I love you" << std::endl;
	exit(1); // 아무 숫자나 넣어도 됨, 무조건 종료되어야 할 때


	std::cout << "I love you, too" << std::endl;

	return 0;
}