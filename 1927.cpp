#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a,b;
	cin>>a;
	string::size_type position;
	while(cin>>b)
	{
		position = a.find(b);
		if (position != b.npos)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	       	cout<<"NO"<<endl;
	    }
		
					
	}	
		
	return 0;
} 
