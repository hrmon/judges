//BE NAME DOOST
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	
	int n,m;
	cin>>n>>m;
	int a[200][200];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			char tmp;
			cin>>tmp;
			a[i][j]=(int)tmp-'0';
		}
	int c=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==0)		continue;
			if(i>0)				c+=max(a[i][j]-a[i-1][j],0);
			if(i<n-1)			c+=max(a[i][j]-a[i+1][j],0);
			if(i==0)			c+=a[i][j];
			if(i==n-1)			c+=a[i][j];
			if(j>0)  			c+=max(a[i][j]-a[i][j-1],0);
			if(j<m-1)			c+=max(a[i][j]-a[i][j+1],0);
			if(j==0)			c+=a[i][j];
			if(j==m-1)			c+=a[i][j];
			c+=2;
		}
	cout<<c;
}
