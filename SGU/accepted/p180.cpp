//BE NAME DOOST
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
const int N=66000;
int n , a[N] ;
long long ans;
void init()
{
	cin>> n;
	for( int i=0 ; i<n ; i++ )
		cin>> a[i];
}

void mer( int s , int f )
{
	int x[N/2] , y[N/2];
	int m=(f+s)/2;
	for(int i=s ; i<m ; i++) x[i-s]=a[i];
	for(int i=m ; i<f ; i++) y[i-m]=a[i];
	int i=0 , j=0;
	while( i+s<m || j+m<f )
	{
		if( i+s>=m )
			a[s+i+j] = y[j++];
		else if( j+m>=f )
			a[s+i+j] = x[i++];
		else if( x[i]<=y[j] )
			a[s+i+j] = x[i++];
		else
		{
			a[s+i+j] = y[j++];
			ans+=(long long)m-i-s;
		}
	}
}

void mers( int l , int r )
{
	if( r-l<2 )return;
	int v= (l+r)/2;
	mers( l , v );
	mers( v , r );
	mer( l , r );
}

void solve()
{
	mers( 0 , n );
	cout<< ans << "\n";
}
int main()
{
	init();
	solve();
}
