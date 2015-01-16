//BE NAME DOOST
#include <iostream>
#include <fstream>
#include <list>
#include <vector>
#include <algorithm>
#include <string>
#define pii pair<int,int>
#define mp make_pair
#define E second.first
#define N first
using namespace std;
const int MN=100+9;
int n,st;
bool vis[MN];
vector< pair< int , pair<int,char> > > g[10];
vector<pair<int ,char> > ans;
void init()
{
    cin>>n;
    for( int i=0 ; i<n ; i++ ){
        int a , b;
        cin>> a >> b;
        g[a].push_back( mp( b , mp( i , '+' ) ) );
        g[b].push_back( mp( a , mp( i , '-' ) ) );
        st=a;
    }
}

void dfs( int c )
{
    for( int i=0 ; i<g[c].size() ; i++ )
    {
        if( !vis[ g[c][i].E ] ){
            vis[ g[c][i].E ] = 1;
            dfs( g[c][i].N );
            ans.push_back( g[c][i].second );
        }        
    }
}

void solve()
{
    int ok=0;
    for( int i=0 ; i<7 ; i++ )
        if( g[i].size()%2==1 ){
            ok++;
            st=i;
        }
    if( ok!=0 && ok!=2 ){
        cout<< "No solution\n";
        return;
    }
    dfs(st);
    for( int i=0 ; i<n ; i++ )
        if( !vis[i] )
        {
            cout<< "No solution\n";
            return;
        }
    reverse( ans.begin() , ans.end() );
    for( int i=0 ; i<n ; i++)
        cout<< ans[i].first+1 << ' ' << ans[i].second << "\n";
    
}
int main()
{
    init();
    solve();
}
