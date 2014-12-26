//BE NAME DOOST

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
#include <iomanip>
#define pii pair<long long,long long>
using namespace std;
const int N=10000+9;
int n,m,k,a,ans;
vector<pii> f;

void ff( int x )
{
	int c=2;
	while(x>1)
	{
		int t=0;
		while( x%c==0 )
		{
			x/=c;
			t++;
		}
		if(t>0) f.push_back( pii(c,t) );
		c++;
	}
}

bool check( int x )
{
	for(int i=0 ; i<f.size() ; i++)
	{
		int t=0;
		while( x%f[i].first==0 ){
			t++;
			x/=f[i].first;
		}
		if( t*m < f[i].second )
			return 0;
	}
	return 1;
}

int main()
{
	cin>> n >> m >> k;
	ff(k);
	for(int i=0 ; i<n ; i++)
	{
		cin>> a;
		ans+= check( a );
	}
	cout<<ans<<"\n";
}


