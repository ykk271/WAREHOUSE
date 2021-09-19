#include <iostream>
#include <cstdarg> // for ellipsis

//À¯¿ëÇÏÁö¸¸ »ç¿ëÀÌ ¾î·Æ°í µğ¹ö±ë Èûµë

using namespace std;

double findAverage(int count, ...)
{
	double sum = 0;
	va_list list;
	va_start(list, count);

	for (int arg = 0; arg < count; ++arg)
		sum += va_arg(list, int);

	va_end(list);

	return sum / count;
}

int main()
{
	cout << findAverage(1, 2, 3, 4, "asd") << endl;
	cout << findAverage(3, 2, 1, 1) << endl;
	cout << findAverage(2, 2, 1, 1) << endl;
	cout << findAverage(10, 1, 1, 1) << endl;
}