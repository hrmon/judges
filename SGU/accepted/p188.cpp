//BE NAME DOOST
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int N=20+9;
int s[N], c[N] , n , t , q[N];

int sum( int ind ){
	return s[ind]+c[ind];
}

bool over( int ind )
{
	return ( s[ind]+c[ind]>=1000 || s[ind]+c[ind]<0 );
}
int main()
{
	cin>> n >> t;
	for( int i=0 ; i<n ; i++ )
		cin>> c[i];
	for( int i=0 ; i<n ; i++ ){
		cin>> s[i];
		s[i]*=t;
	}
	for( int j=0 ; j<n ; j++){
		for( int l=0 ; l<n ; l++ )
		{
			if( s[j]+s[l]!=0 && abs(s[j])+abs(s[l]) == abs(s[j]+s[l]) ) continue;
			if( (s[j]>0 && c[j]>c[l]) || (s[l]>0 && c[l]>c[j]) )
			{
				if( abs(s[j])+abs(s[l]) >= 1000-abs(c[j]-c[l]) )
					q[j]+= ( abs(s[j])+abs(s[l])-1000+abs(c[j]-c[l]) )/1000 +1; 
			}
			else if( (s[j]>0 && c[j]<c[l]) || (s[l]>0 && c[l]<c[j]) )
			{
				if( abs(s[j])+ abs(s[l]) >= abs(c[j]-c[l]) )
					q[j]+= ( abs(s[j])+abs(s[l])-abs(c[j]-c[l]) )/1000+1;
			}

		}
	}
	for( int i=0 ; i<n ; i++ )
		cout<< q[i] << ' ';
}
