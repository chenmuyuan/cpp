#include<iostream>
#include<cstring>
using namespace std;
int main()
{	
	int n;
	cin>>n;	
	int m[10000];
	int a[100000000];
	memset(a,0,sizeof(a));
	int maxn;
	for(int i = 1;i<=n;i++)
	{
		cin>>m[i];
		a[m[i]]++;
		if(m[i]>maxn)
		{
			maxn = m[i];
		}
	}
	int t = 0;
	for(int i = 1;i<=maxn;i++)
	{
		if(t < a[i])
		{
			t = a[i];	
		}
	}
	for(int i = 1;i<=maxn;i++)
	{
		if(a[i]==t)
		{
			cout<<i<<" "<<t<<endl;
		}
	}
	return 0;	
} 
