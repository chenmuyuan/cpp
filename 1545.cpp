
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
bool Str(string str)
{
    int len = str.size(),i,j;
    for(i=0,j=len-1;i<=len/2;i++,j--)
    {
        if(str[i]!=str[j])
            return false;
    }
    return true;
}
int main()
{
	string a;
	while(1)
	{
		cin>>a;
		if(Str(a))
		{
			cout<<"yes"<<endl; 
		}
		else if(a!="end")
		{
			cout<<"no"<<endl;
		}
		if(a=="end") break;
	}
	return 0;
} 

