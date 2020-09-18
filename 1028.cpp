#include <iostream>
using namespace std;
int main(){
	
	int n,i,j;
	int min,x,y;
	int exist;
	cin>>n;
	int p[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		cin>>p[i][j];
	}

	for(i=0;i<n;i++){
		min=p[i][0];
		x=i;
		y=0;
		for(j=0;j<n;j++){
			if(p[i][j]<min){
				min=p[i][j];
				y=j;
			}
		}
		for(j=0;j<n;j++){
			if(p[x][y]<p[j][y])
				break;
		}
		
		if(j>=n){
			cout<<++x<<endl<<++y; 
			exist=1;
		}
	}
	if(exist==0)
		cout<<"no";
	return 0;
}
