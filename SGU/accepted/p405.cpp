//BE NAME DOOST
#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

int n,m,s[109];

int main()
{
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		for(int j=0;j<n;j++)
		{
			int x,y;
			cin>>x>>y;
			if(x==a)s[j]++;
			if(y==b)s[j]++;
			if(a-b==x-y)s[j]+=3;
			if((a-b>0 && x-y>0) || (a-b<0 && x-y<0) || (a-b==0 && x-y==0))s[j]+=2;
		}
	}
	for(int i=0;i<n;i++)
		cout<<s[i]<<" ";
}
