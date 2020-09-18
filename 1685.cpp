#include<iostream>
#include<cstring>
using namespace std;
int pc(int n)
{
	if(n!=-1) 
	{
		return n+=1;
	}
}
int main()
{
	freopen("mine.in","r",stdin);
	
	int n,m;
	cin>>n>>m;
	int a[n][m];
	char b;
	memset(a,0,sizeof(a));
	for(int i = 0; i<n;i++)
	{
		for(int j =0;j<m;j++)
		{
			cin>>b;
			if(b=='*')
			{
				a[i][j] = -1;
			}
			else if(b=='?')
			{
				a[i][j] = 0;
			}
		}
	}
	for(int i = 0; i<n;i++)
	{
		for(int j =0;j<m;j++)
		{
			if(a[i][j] == -1)
			{
				if(i>0 && j>0)	a[i-1][j-1]=pc(a[i-1][j-1]);
				if(i>0)	a[i-1][j]=pc(a[i-1][j]);
				if(i>0)	a[i-1][j+1]=pc(a[i-1][j+1]);
				if(j>0)	a[i][j-1]=pc(a[i][j-1]);
				a[i][j+1]=pc(a[i][j+1]);
				if(j>0)	a[i+1][j-1]=pc(a[i+1][j-1]);
				a[i+1][j]=pc(a[i+1][j]);
				a[i+1][j+1]=pc(a[i+1][j+1]);
				/*
					*??
					?*?
					?*?
				*/
			}
		
		}
	}
	for(int i = 0; i<n;i++)
	{
		for(int j =0;j<m;j++)
		{
			if(a[i][j] == -1)
			{
				cout<<"*";
			}
			else
			{
				cout<<a[i][j];
			}
			
		}
		cout<<endl;
	}

	freopen("mine.out","w",stdout);
	return 0;
}

