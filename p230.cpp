//BE NAME DDOST
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define mp make_pair
using namespace std;
int n,m;
vector <pair<int,bool> > G[109];
bool mark[109]={false};

int findRoot()
{
	for(int i=0;i<n;i++)
	{
		bool c=true;
		for(int j=0;j<G[i].size();j++)
			if(!G[i][j].second){
				c=false;
				break;
			}
		if(c)
			return c;
	}
	return -1;
}


int main()
{
	
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		G[a].push_back(mp(b,true));
		G[b].push_back(mp(a,false));
	}
	int root=findRoot();
	if(root<0)
		cout<<"No solution";
	

}
