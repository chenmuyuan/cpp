#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int m[n][n];
	int r=0;
	for(int i = 0;i<n;i++)
	{
		
		for(int j = 0;j<n;j++)
		{
			
			cin>>m[i][j];
		}
	}
	
	for(int i = 0;i<n;i++)
	{
		
		for(int j = 0;j<n;j++)
		{
			if(i==j)
			{
				r+=m[i][j];	
			}
			
		}
	}
	cout<<r;
	return 0;
}

