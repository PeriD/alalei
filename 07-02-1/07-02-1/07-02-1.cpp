#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	double l, r = 0;
	while (cin>>l>>r)
	{
		double L = 2 * 3.14*r;
		if (l <= L)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << "No" << endl;
		}
	}
	system("pause");
	return 0;
}