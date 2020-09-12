#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m[n][n];
	memset(m,0,sizeof(m));
	for(int i = 0;i<n;i++)
	{
		m[i][0] = 1;
		m[i][i] = 1;
	}
	for(int i = 2;i<n;i++)
	{	
		for(int j = 1;j<n;j++)
		{	
			m[i][j] = m[i-1][j-1] + m[i-1][j];
		}
	}
	for(int i = 0;i<n;i++)
	{	
		for(int j = 0;j<=i;j++)
		{	
			//if(m[i][j]!=0 && i+j!=n+n-2 )
				cout<<m[i][j];//<<" ";
//			if(m[i][j]!=0 && i+j==n+n-2 )
//				cout<<m[n-1][n-1];
//			if(i==j && i+j!=n+n-2)
//				cout<<endl;
		if(i==j && i+j!=n+n-2)
			cout<<endl;
		else 
			cout<<" ";
			
		}
		
	}
	
	
	return 0;
}
