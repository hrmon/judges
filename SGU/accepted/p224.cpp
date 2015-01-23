//BE NAME DOOST
#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;
const int N=100+9;
int ans,n,k;

void go( int q , int r , int bm , int bmr , int bml )
{
    if( q==k )
        ans++;
    if( r==n || q==k )
        return;
    int c= ~( bm | bmr | bml ) & ((1<<n)-1);
    while(c>0)
    {
        int p= ~(c-1) & c;
        go( q+1 , r+1 , bm|p , (bmr|p)>>1 , (bml|p)<<1 );
        c = c&(c-1);   
    }
    go( q , r+1 , bm , bmr>>1 , bml<<1 );
}

int main()
{
    cin>> n >> k;
    go( 0 , 0 , 0 , 0 , 0 );
    cout<< ans << endl;
}
