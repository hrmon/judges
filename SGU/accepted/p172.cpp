// BE NAME DOOST
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int n,m;
vector <int> A[209];
vector <int> R;
bool mark[209]={false};
int ind[209]={-1};

bool dfs(int node,bool p)
{
	mark[node]=true;
	ind[node]=p;
	if(p)
		R.push_back(node);		
	p=(p+1)%2;
	bool r=true;
	for(int i=0;i<A[node].size();i++)
	{
		if(!mark[A[node][i]])
			r=r && dfs(A[node][i],p);
		else if(ind[A[node][i]]==ind[node])
			return false;
	}
	return r;
}


int main()
{

	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		A[a].push_back(b);
		A[b].push_back(a);
	}
	bool s=true;
	for(int i=1;i<=n;i++)
	{
		if(!mark[i])
			s=s && dfs(i,1);
	}
	if(!s){
		cout<<"no";
		return 0;
	}
	cout<<"yes"<<endl<<R.size()<<endl;
	for(int i=0;i<R.size();i++)
		cout<<R[i]<<" ";
}
