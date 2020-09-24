#include <iostream>
using namespace std;
int ys(int v)
{
   	int r=0; 
	for(int i = 1;i*i <= v;i++)
	{
//		if(v % i == 0)
//		{
//			r+=i;
//		}
		if (v % i == 0)
        {
            if (i == 1 || i * i == v)
                r += i;
            else
                r += i + v / i;
        }
	}
	return r;
}

int main()
{
    int m,n;
    cin>>n;
    for (int i = 2; i <= n; i++)
    {
        m = ys(i);
        if (ys(m) == i && i < m)
            cout<<i<<" "<<m<<endl;
    }
    return 0;
}

