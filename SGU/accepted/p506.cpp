//BE NAME DOOST
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <fstream>
#include <iomanip>
#define pii pair<int,int>
#define mp make_pair
using namespace std;
const int N=1e5+9;
string s , t;
int f[N];
long long ans;
void init()
{
    cin>> s >> t;   
}

void solve()
{
    memset(f , -1 , sizeof(f) );
 
    if( s[0]==t[0] ) f[0]=0;
    for( int i=1 ; i<s.size() ; i++ )
        f[i] = ( s[i]==t[0] ? i : f[i-1] );
    for( int i=1 ; i<t.size() ; i++ ){
        int tmp=f[i-1];
        f[i-1]=-1;
        for( int j=i ; j<s.size() ; j++ ){
            int c=f[j];
            if( s[j]==t[i] )
                f[j]=tmp;
            else
                f[j]=f[j-1];
            tmp=c;
        }
    }
    for( int i=0 ; i<s.size() ; i++ )
        ans+=(long long)f[i]+1;// cout<< f[i]<< ' ';
    cout<< ans << endl;
}

int main()
{
    init();
    solve();
}

