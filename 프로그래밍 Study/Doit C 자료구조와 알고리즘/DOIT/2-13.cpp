#include <iostream>
#define VMAX 21

using namespace std;

typedef struct
{
	char name[20];
	int height;
	double vision;
}PhysCheck;

double ave_height(const PhysCheck dat[], int n)
{
	int i;
	double sum = 0;
	for (i = 0; i < n; ++i)
	{
		sum += dat[i].height;
	}
	return sum / n;
}

void dist_vision(const PhysCheck dat[], int n, int dist[])
{
	int i;
	for (i = 0; i < VMAX; ++i)
		dist[i] = 0;
	for (i = 0; i < n; ++i)
	{
		if (dat[i].vision >= 0.0 && dat[i].vision <= VMAX / 10.0)
			dist[(int)(dat[i].vision * 10)]++;
	}
}
int main()
{
	int i;
	PhysCheck x[] = {
		{"박현규", 123, 0.3},
		{"함진아", 121, 0.5},
		{"최윤미", 125, 0.1},
		{"홍연의", 151, 0.3},
		{"이수진", 144, 0.6},
		{"김영진", 143, 2.0},
		{"박용규", 178, 2.0}
	};

	int nx = sizeof(x) / sizeof(x[0]);
	int vdist[VMAX];

	cout << "신체검사표" << endl;
	cout << "=========" << endl;
	for (i = 0; i < nx; ++i)
		cout << x[i].name << " " << x[i].height << " " << x[i].vision << endl;
	cout << "평균 키: " << ave_height(x, nx) << endl;
	dist_vision(x, nx, vdist);

	cout << "시력분포" << endl;
	for (i = 0; i < VMAX; ++i)
	{
		cout.precision(2);
		cout << fixed;
		cout << i / 10.0 << "~:" << vdist[i] << endl;
	}
		


	return 0;
}