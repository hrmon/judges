//BE NAME DOOST
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
const int N=16000+9;
int n,ans=1e9;
vector<int>g[N],c[N],l;
bool vis[N];
void init()
{
	cin>> n;
	for( int i=1 ; i<n ; i++ )
	{
		int x,y;
		cin>> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
		c[x].push_back(0);
		c[y].push_back(0);
	}
}

int dfs1( int p )
{
	vis[p] = 1;
	int s=0;
	for( int i=0 ; i<g[p].size() ; i++ )
		if( !vis[ g[p][i] ] ){
			c[p][i]= dfs1( g[p][i] );
			s+= c[p][i];
		}
	return s+1;			
}

void dfs2( int p , int cs=0 )
{
	vis[p] = 1;
	int s=0;
	for( int i=0 ; i<g[p].size(); i++ )
		s+= c[p][i];

	for( int i=0 ; i<g[p].size(); i++ )
		if( vis[ g[p][i] ] )
			c[p][i]= cs;
		else
			dfs2( g[p][i] , s+cs-c[p][i]+1 );
}

void solve()
{
	dfs1(1);
	fill( vis , vis+N , 0 );
	dfs2(1);
	for( int i=1 ; i<=n ; i++){
		int m=0;
		for( int j=0 ; j<g[i].size(); j++ )
			m=max( m , c[i][j] );//, cout<< c[i][j] << ' ';
		if(m<ans)
		{
			ans=m;
			l.clear();
			l.push_back(i);
		}
		else if(m==ans)
			l.push_back(i);
	}
	cout<< ans << ' ' << l.size() << "\n";
	sort( l.begin() , l.end() );
	for( int i=0 ; i<l.size() ; i++) cout<< l[i] << ' ';
}


int main()
{
	init();
	solve();
}
