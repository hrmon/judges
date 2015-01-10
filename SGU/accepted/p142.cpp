//BE NAME DOOST
#include <iostream>
#include <set>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
int n,s,f;
string v,ans;
set<int> e;
bool check( int x )
{
	cout<<endl;
	e.clear();
	int t=0 , p=1;
	for( int i=0 ; i<x ; i++,p*=2 )
		t += ( v[i]=='b' ? p : 0 );
	p/=2;
	e.insert( t );
	cout<<t<<' ';
	for( int i=x ; i<n ; i++ )
	{
		t= t/2 + ( v[i]=='b' ? p : 0 );
		cout<<t<<' ';
		e.insert( t );
		if( e.size() >= p*2 )
			return 0;
	}
	return 1;
}
int main()
{
	cin>> n >> v;
	s=0; f=log2(n)+1;
	while( f-s>1 )
	{
		int m = (f+s) / 2;
		if( check(m) )
			f=m;
		else
			s=m;
	}
	check(f);
	cout<< f << endl;
	int x=pow( 2 , f ) , p=0;
	while( e.find(p) != e.end() ) p++;
//	for( auto i=e.begin() ; i!=e.end() ; i++)
//		cout<< *i << endl;
//	cout<<p<<endl;
	for( int i=0 ; i<f ; i++ ){
		ans.push_back( ( p%2==0 ? 'a' : 'b' ) );
		p/=2;
	}
	cout<< ans << "\n";
}
