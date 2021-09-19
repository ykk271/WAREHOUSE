#include <iostream>

int main() {

	int y, m, d;

	scanf_s("%d.%d.%d", &y, &m, &d);

	printf("%02d-%02d-%04d", d, m, y);

	return 0;
}
