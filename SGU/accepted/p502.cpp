//BE NAME DOOST
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
const int N=100+10;
long long n;
void init()
{
	cin>>n;
}
vector<long long>d;
void solve()
{
	while(n>0){
		d.push_back(n%10);
		n/=10;
	}
	sort( d.begin() , d.end() );
	for( int i=0 ; i<d.size() ; i++ )
		if( d[i]!=0 )
		{
			swap(d[i] , d[0]);
			break;
		}
	do{
		long long t=0;
		if( d[0]==0 )
			continue;
		for( int i=0 ; i<d.size() ; i++ )
			t= t * 10 + d[i];
		if( t%17==0 ){
			cout<< t << "\n";
			return;
		}
	}while( next_permutation( d.begin() , d.end() ) );
	cout<< "-1\n";
}

int main()
{
	init();
	solve();
}
