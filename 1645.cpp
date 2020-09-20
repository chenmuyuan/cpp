#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string name,sc = "";
	int wen,li;
	for(int i = 0;i<n;i++)
	{
		cin>>name>>wen>>li;
		sc+=name+" ";
		if(wen > li)
		{
			sc += "wen";
		}
		else
		{
			sc+="li";
		}
		if(i<n-1)
			sc+="\n";
		
	}
	cout<<sc;
	return 0;
}
