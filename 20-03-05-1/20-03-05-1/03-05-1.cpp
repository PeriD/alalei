#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int main()
{
	long long a[100] = { 0 };
	a[0] = 1;
	a[1] = 1;
	for (int i = 2; i <= 79; i++) 
	{
		a[i] = a[i - 1] + a[i - 2];
	}
	int n, m;
	while (cin >> n >> m) {
		long long count = 0;
		for (int i = n - 1; i <= m - 1; i++)
		{
			count += a[i];
		}
		cout << count << endl;
	}
	system("pause");
	return 0;
}