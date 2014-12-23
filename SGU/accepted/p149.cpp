//BE NAME DOOST
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
const int MAXN=10009;
vector<pair<int,int> > G[MAXN];
vector<int> D[MAXN];
bool mark[MAXN];
int n;

int dfs(int node)
{
	mark[node]=true;
	int x=0;
	for(int i=0;i<G[node].size();i++)
		if(!mark[G[node][i].first])
		{
			int y;
			if(D[node][i]<0)
				y=dfs(G[node][i].first);
			else
				y=D[node][i];
			D[node][i]=y;
			x=max(x,y+G[node][i].second);
		}
	return x;
}

int main()
{
		scanf("%d",&n);
		for(int i=0;i<=n;i++)G[i].clear(),D[i].clear();
		for(int i=2;i<=n;i++)
		{
			int t,l;
			scanf("%d%d",&t,&l);
			G[i].push_back(make_pair(t,l));
			G[t].push_back(make_pair(i,l));
			D[i].push_back(-1);
			D[t].push_back(-1);
		}

		for(int i=1;i<=n;i++){
			fill(mark,mark+n+9,false);
			int out=dfs(i);
			printf("%d\n",out);
		}
}
