//BE NAME DOOST
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int n,ans,t;
vector<int> b;
string s;
bool x;
int main()
{
	cin>> n;
	for( int i=2 ; i<=7 ; i++ ){
		cin>> x;
		if( x ){
			b.push_back( i );
			t+=i;
		}
	}
	cin>> s;
	if( n==0 )
	{
		if( s=="RED" )
			t+= b[ b.size()-1 ];
		cout<< t << "\n";
		return 0;
	}
	ans+= n + t + n * b[ b.size()-1 ];		
	if( s=="RED" )
		ans+= b[ b.size()-1 ];
	cout<< ans << "\n";
}
