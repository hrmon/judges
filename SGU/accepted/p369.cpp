//BE NAME DOOST
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cstdio>
#include <map>
#define pii pair<int,int>
using namespace std;
const int N=2*1e5+9;
vector< vector<int> > x,y;
bool vx[N],vy[N];//map<int , bool> vx,vy;
map<int , int> mx,my;
int n,p,q;
long long ans;
void init()
{
	cin>> n;
	for( int i=0 ; i<n ; i++ )
	{
		int a,b;
		scanf("%d %d",  &a , &b);
		if( my[b]==0 )
		{
			y.push_back( vector<int>() );
			my[b]=y.size();
		}
		if( mx[a]==0 )
		{
			x.push_back( vector<int>() );
			mx[a]=x.size();
		}
		int px= mx[a]-1 , py= my[b]-1;
		y[ py ].push_back( px );
		x[ px ].push_back( py );
	}
}

void dfs( int c , int d )
{
	if( d ){
		vx[ c ]=1;
		p++;
		for( int i=0 ; i<x[c].size() ; i++)
			if( !vy[ x[c][i] ] )
				dfs( x[c][i] , !d );
		return;
	}
	q++;
	vy[ c ]=1;
	for( int i=0 ; i<y[c].size() ; i++ )
		if( !vx[ y[c][i] ] )
			dfs( y[c][i] , !d );
}

void solve()
{
	for( int i=0 ; i<x.size() ; i++ )
		if( !vx[i] )
		{
			p=q=0;
			dfs( i , 1 );
			ans+= (long long)p*q;
		}
	cout<< ans << "\n";
}

int main()
{
	init();
	solve();
}
