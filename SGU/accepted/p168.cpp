//BE NAME DOOST
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <set>
using namespace std;
const int N=1000+9;
int n,m,a[N][N],b[N][N];
int main()
{
	cin>> n >> m;
	
	for( int i=0 ; i<n ; i++ )
		for( int j=0 ; j<m ; j++ )
			scanf("%d", &a[i][j]);

	
	for( int i=m-1 ; i>=0 ; i-- )
		for( int j=n-1 ; j>=0 ; j-- )
		{
			b[j][i]=a[j][i];
			if( j<n-1 )
				b[j][i]=min( b[j][i] , b[j+1][i] );
			if( i<m-1 && j>0 )
				b[j][i]=min( b[j][i] , b[j-1][i+1] );
			else if( i<m-1 )
				b[j][i]=min( b[j][i] , b[j][i+1] );
		}


	for( int i=0 ; i<n ; i++ ){
		for( int j=0 ; j<m ; j++ )
			printf("%d ", b[i][j] );
		printf("\n");
	}
}
