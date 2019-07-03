#define _CRT_SECURE_NO_WARNINGS 1
/*#include<iostream>
#include<vector>
using namespace std;
int main(){
	char num[10000];
	int i = 0;
	while (gets(num) != NULL)
	{
		for (i = 0; i < strlen(num); i++)
		{
			cin >> num[i];
		}
		int a, b = 0;
		for (int i = 0; i < 10; i++)
		{
			a = num[i] % 10;
			b = num[i] / 10;
			int count = a + b;
			cout << count;
			cout << " ";
		}
	}
	system("pause");
	return 0;
}*/
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{   
	int i,num;char str[1005];
	while(gets(str)!=NULL && str[0]!='0')
	{  
		num=0;  
		for(i=0;i<strlen(str);i++)  
		{
			num+=str[i]-'0'; 
		}     
		printf("%d\n",(num-1)%9+1); 
	} 
	system("pause");
	return 0;
}