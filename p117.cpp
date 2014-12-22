//BE NAME DOOST
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int n,m,k,r;
int cp(int a)
{
	if(m==0)
		return 1;
	if
}
int main()
{
	cin>>n>>m>>k;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		long long d=x%k;
		bool c=false;
		for(int j=1;j<m;j++)
		{
			d*=x;
			d%=k;
			if(d==0)
			{
				c=true;
				break;
			}
		}
		if(c)
			r++;
	}
	cout<<r<<endl;
}
