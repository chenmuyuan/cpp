#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	int j = 0;
	cin>>a;
	if(a[0] == '-')
	{
		cout<<"-";
	}
	reverse(a.begin(),a.end());
	for(int i = 0;i<a.size();i++)
	{
		if(a[i]!='0' && a[i] != '-' && j < 1)
		{
			j++;
		}
		
		if(a[i] != '-' && j == 1)
		{
			cout<<a[i];
		}
	}
	return 0;
} 
