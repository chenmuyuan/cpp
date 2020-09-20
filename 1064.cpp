#include <iostream>
using namespace std;
bool sn(int n)
{
	if(n<2)
		return false;
	for	(int i=2;i*i<=n;i++)
	{	
			if(n % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int n,count = 0;
	cin>>n;
	for(int i = 0;i<n;i++)
	{
		if(sn(i))
		{
			if(sn(i+1))
			{
				count++;
			}
			else if(sn(i+2))
			{
				count++;
			}
		}
	}
	cout<<count;
	return 0;
}


