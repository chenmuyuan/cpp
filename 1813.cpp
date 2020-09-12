#include <iostream>
using namespace std;

int main()
{
	int n,m;
	cin>>n;
	cin>>m;
	int c[n][m];
	for(int i = 0;i<n;i++)
	{
		
		for(int j = 0;j<m;j++)
		{
			
			cin>>c[i][j];
		}
	}
	cout<<m<<" "<<n<<endl; 
	for(int k = 0;k<m;k++)
	{	
		for(int l = 0;l<n;l++)
		{
			
			cout<<c[l][k]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
