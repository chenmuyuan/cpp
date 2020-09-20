#include<iostream>
#include <cstring>
using namespace std;
int main()
{
	char a[800];
	gets(a);
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]>=65&&a[i]<=90)
		{
			a[i]+=32;
		}
		else if(a[i]>=97&&a[i]<=122)
		{
			a[i]-=32;
		}
		else
		{
			a[i] = a[i];	
		} 
	}
	cout<<a;
	return 0;	
} 
