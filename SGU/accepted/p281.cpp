//BE NAME DOOST 
#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
#include <set>
#include <algorithm>
using namespace std;
const int N=5*1e4+9;
int n,m;
string fc[N],sc[N];
vector<string>ans;
set<string>t;
void init()
{
    scanf("%d", &n);
    char tmp[25];
    for( int i=0 ; i<n ; i++ )
        scanf("%s", tmp) , fc[i]=tmp;
    for( int i=0 ; i<n ; i++ )
        scanf("%s", tmp) , sc[i]=tmp;
}
void solve()
{
    for( int i=0 ; i<n ; i++ )
    {
        t.insert( fc[i] );
        t.insert( sc[i] );
        m++;
        if( m==t.size() )
        {
            for( set<string>::iterator j=t.begin() ; j!=t.end() ; j++ )
                 printf( "%s\n" , j->begin() );
            m = 0;
            t.clear();
        }
    }
}
int main()
{
    init();
    solve();
}

