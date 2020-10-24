#include<iostream>
using namespace std;
int main()
{
	 int i,p,n,t;
	cin>>n>>p;
	t=2*p;
	for(i=p+1;i<=n;i++)
	  t+=i;
	cout<<t;
}
