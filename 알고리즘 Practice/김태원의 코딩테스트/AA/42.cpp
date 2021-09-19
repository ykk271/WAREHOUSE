// ÀÌºĞÅ½»ö

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);

	int N, key;
	cin >> N;
	cin >> key;
	vector<int> a(N);

	for (int i = 0; i < N; ++i)
	{
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	int lt = 0;
	int rt = N - 1;
	int mid = (lt + rt) / 2;

	while (lt <= rt)
	{
		if (a[mid] == key)
			break;
		else if (a[mid] > key)
		{
			rt = mid;
			mid = (lt + rt) / 2;
		}
		else if (a[mid] < key)
		{
			lt = mid;
			mid = (lt + rt) / 2;
		}
	}


	cout << mid + 1;

	return 0;
}