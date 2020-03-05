#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	int n;
	int a, b;
	while (cin >> n)
	{
		int i;
		int tep = 1;
		for (i = 0; i < n; i++)
		{
			tep *= 5;
			a = 5 * (tep - 1) + 1;
		}
		b = n;
		cout << a << ' ' << b << endl;
	}
	system("pause");
	return 0;
}