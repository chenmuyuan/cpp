#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;	
	int i=0,j=0,k=0,l=0;
	while(i<a.size())
	{
		if(a[i]>='0' && a[i]<='9')
		{
			cout<<a[i];
			j++;
		}
		if(j==4) break;
		i++;
	}
	k=i+1;
	while(k<a.size())
	{
		if(a[k]>='0' && a[k]<='9')
		{
			if(a[k+1]>='0' && a[k+1]<='9')
			{
				cout<<a[k]<<a[k+1];
				break;
			}
			else{
				cout<<"0"<<a[k];
				break;
			}
		}
		k++;
	}
	l=k+2;
	while(l<a.size())
	{
		if(a[l]>='0' && a[l]<='9')
		{
			if(a[l+1]>='0' && a[l+1]<='9')
			{
				cout<<a[l]<<a[l+1];
				break;
			}
			else{
				cout<<"0"<<a[l];
				break;
			}
		}
		l++;
	}
	return 0;
} 
