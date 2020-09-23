#include<iostream>
#include <cstring>
using namespace std;
char a[10][10];
int main()
{
	int n,k,k1;
	
	cin>>n>>k;
	k1 = ((2*n)-1)*k;
	for(int i = 0;i<=n;i++)
	{
		for(int j = 0;j<n-i;j++)
		{
			if(i!=0 && i!=n)
				cout<<" ";
		}
		for(int x = 0;x<2*i-1;x++)
		{
			cout<<"*";	
		}
		for(int o = 0;o<k-1;o++)
		{
			if(i!=0)
			{
				for(int y=0;y<2*n-2*i;y++)
				{
					cout<<" ";
				}
				for(int x = 0;x<2*i-1;x++)
				{
					cout<<"*";	
				}
			}
		}
		for(int j = 0;j<n-i;j++)
		{
			if(i!=0 && i!=n)
				cout<<" ";
		}
		if(i!=0 && i!=n)
			cout<<endl;
	}
	return 0;	
} 
