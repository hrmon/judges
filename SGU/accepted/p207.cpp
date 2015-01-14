//BE NAME DOOST
#include <iostream>
#include <fstream>
#include <list>
#include <set>
#include <algorithm>
#include <vector>
#include <string>
#define mp make_pair
using namespace std;
const int N=1000+9;
int n, m, y, x[N], t[N], s;
set<pair<int , int> > r;
int main()
{
	cin>> n >> m >> y;
	s=m;
	for( int i=0 ; i<n ; i++ ){
		cin>> x[i];
		t[i] = x[i] * m / y;
		r.insert( make_pair(t[i]*y - x[i]*m , i ) );
		s-=t[i];
	}
	
	while( s>0 )
	{
		int p=r.begin()->second;
		r.erase( r.begin() );
		t[p]++;
		r.insert( make_pair( t[p]*y - x[p]*m , p ) );
		s--;
	}
	for( int i=0 ; i<n ; i++ )
		cout<< t[i] << ' ';
}
