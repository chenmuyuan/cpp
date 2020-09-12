#include <iostream>
using namespace std;
int main()
{
	int n,a = 100000,r1=123,r2=123,b=0;
	cin>>n;
	int m[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>m[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{ 
			if(m[i][j] < a)
			{
				a = m[i][j];
				r1 = i;
				r2 = j;	
			}
		}
		for(int k=0;k<n;k++)
		{
			if(m[k][r1] < a)
			{
				b = m[k][r1];
			}
		}
		if(a==b)
		{
			break; 
		}
	}
	cout<<r1<<endl<<r2;
	return 0;
} 
