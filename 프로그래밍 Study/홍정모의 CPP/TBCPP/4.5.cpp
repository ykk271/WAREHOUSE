//형변환 Type conversion
//작은 것에서 큰 것으로 안하면 오류남

#include <iostream>
#include <typeinfo>
#include <iomanip> //setpercision 사용

int main()
{
	using namespace std;

	//암시적 형변환

	int a = 123.0;

	//nemeric promotion
	float c = 1.0f;
	double d = c;

	//numeric conversion
	int i = 30000;
	char j = i;

	cout << static_cast<int>(c) << endl;

	
	cout << typeid(4.0).name() << endl;
	cout << typeid(4).name() << endl;
	cout << typeid(a).name() << endl;


	double k = 0.12321541251256;
	float g = k;

	cout << std::setprecision(12)<< g << endl;
	
	float z = 3.99;
	int y = z;
	cout << y << endl; //소수점 자리는 버림


	cout << 5u - 10u << endl; //unsigned int 사용 시 조심
	// unsigned int 가 int 보다 우선순위가 높기 때문

	/*우선순위
	long double
	double, float, unsigned long long, long long
	unsigned long, long, unsigned int, int
	*/


	//명시적 형변환

	//기능적 차이 없음
	int i1 = int(4.0);  // c++ 스타일
	int i2 = (int)4.0; // c 스타일
	int i3 = static_cast<int>(4.0);

	return 0;
}
