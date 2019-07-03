#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
int main()
{
	double a = 0;
	double b = 0;
	double c = 0;
	while (cin >> a, cin>>b,cin>>c)
	{
		if ((a + b > c)&&(a - b < c)&&(b + c > a)&&(b - c < a)&&(c + a > b)&&(c - a < b))
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