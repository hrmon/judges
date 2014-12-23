//BE NAME DOOST
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

const int MAXN=50+9;
vector <int> G[MAXN];
bool mark[MAXN];
set <int> ff;

void gv(int n)
{
	mark[n]=true;
	for(int i=0;i<G[n].size();i++)
			mark[G[n][i]]=true;
	for(int i=0;i<G[n].size();i++)
		for(int j=0;j<G[G[n][i]].size();j++)
			if(!mark[G[G[n][i]][j]])
				ff.insert(G[G[n][i]][j]);
}

int main()
{
	int n,x;
	cin>>n>>x;
	for(int i=1;i<=n;i++)
	{
		int f;
		cin>>f;
		for(int j=0;j<f;j++)
		{
			int v;
			cin>>v;
			G[i].push_back(v);
		}
	}
	gv(x);
	cout<<ff.size()<<endl;
	for (set<int>::iterator it=ff.begin(); it!=ff.end(); ++it)
  		cout<<*it<<" ";

}
