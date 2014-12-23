//BE NAME DOOST
#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include <vector>
using namespace std;
const int MAXN=10+9;
int n,m;
vector <int> d[MAXN];


int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		int l;
		cin>>l;
		for(int j=0;j<l;j++)
		{
			int a;
			cin>>a;
			d[i].push_back(a);
		}
	}

	for(int i=0;i<m;i++)
	{
		int l;
		vector <int> a, r;
		cin>>l;
		set <int> f;
		for(int j=0;j<l;j++){
			int x;
			cin>>x;
			if(x<0)f.insert(-1*x);
			else a.push_back(x);
		}
		for(int j=0;j<n;j++)
		{
			bool mark[109],c=true;
			fill(mark,mark+105,false);
			for(int k=0;k<d[j].size();k++)
			{
				set<int> tmp=f;
				int sf=tmp.size();
				tmp.insert(d[j][k]);
				if(sf==tmp.size()){
					c=false;
					break;
				}
				mark[d[j][k]]=true;
			}
			for(int k=0;k<a.size();k++)
				if(!mark[a[k]])
				{
					c=false;
					break;
				}
			if(c)
				r.push_back(j);
		}
		cout<<r.size()<<endl;
		for(int j=0;j<r.size();j++){
			cout<<d[r[j]].size()<<" ";
			for(int k=0;k<d[r[j]].size();k++)
				cout<<d[r[j]][k]<<" ";
			cout<<endl;
		}
		
	}
}
