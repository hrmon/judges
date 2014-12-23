//BE NAME DOOST
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

const int  MAXN=100+9;
int n,m;
vector <int> r[MAXN];
vector <int> d;
int main()
{
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a;
		if(a==0)
			continue;
		for(int j=0;j<a;j++)
		{
			cin>>b;
			r[b].push_back(i);
		}
	}
	
	int t=1;
	while(r[t].size()==0 && t<n)t++;
	if(r[t].size()==0)
	{
		cout<<0<<endl;
		return 0;
	}
	d.push_back(t);
	
	for(int i=t+1;i<=n;i++)
	{
		if(r[i].size()==0)
			continue;
		bool e=false;
		for(int j=0;j<d.size();j++)
		{
			if(r[d[j]].size()!=r[i].size())
				continue;
			bool s=true;
			for(int l=0;l<r[i].size();l++)
				if(r[d[j]][l]!=r[i][l])
				{
					s=false;
					break;
				}
			if(s)
			{
				e=true;
				break;
			}
		}
		if(!e)
			d.push_back(i);
	}
	cout<<d.size()<<endl;
}
