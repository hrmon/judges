//BE NAME DOOST
#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#define pii pair<long long,long long>
using namespace std;
const int N=20000;
long long n,ans,m,s,t,p;
pii c[N];
void init()
{
	cin>> n;
	for(int i=0 ; i<n ; i++){
		cin>> c[i].first >> c[i].second;
		s+= c[i].second;
	}
}

void solve()
{
	if( n==0 ){ cout<< "0.00000\n"; return; }
	if( n==1 ){ cout<< c[0].first << ".00000\n"; return; }
	sort( c , c+n );
	p=m=0;
//	while(c[p].first==c[p+1].first) c[p+1].second+=c[p].second , p++;
	for(int i=p+1 ; i<n ; i++)
		m+=(c[i].first-c[p].first) * c[i].second;
	ans=m;
	s-=c[p].second;
	t+=c[p].second;
//	cout<<m<<endl;
	for( int i=1 ; i<n ; i++ )
	{
		 m= m-((s-t) * (c[i].first-c[i-1].first));
		if( m<ans )
		{
			p=i;
			ans=m;
		}
		s-=c[i].second;
		t+=c[i].second;
	}
	cout<< c[p].first << ".00000\n";
}


int main()
{
	init();
	solve();
}
