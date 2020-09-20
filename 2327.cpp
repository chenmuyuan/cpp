#include<iostream>
#include <cstring>
using namespace std;
int main()
{
	char a[100];
	gets(a);
	int count = 0;
	for(int i = 0 ;i<strlen(a);i++)
	{
		if(a[i]!=' '&&a[i]!='\n')
		{
			count++;
		}
	}
	cout<<count;
	return 0;	
} 
