//BE NAME DOOST
#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
#define V first.second
#define P first.first
#define ind second
#define mp make_pair
using namespace std;
int n,d;
pair<pair<int,int>,int> b[200009];
int m[200009];
int main()
{
	cin>>n>>d;
	for(int i=0;i<n;i++){
		cin>>b[i].P>>b[i].V;
		b[i].ind=i;
	}
	sort(b,b+n);
	if(n<2 || b[n-1].P-b[0].P<d){
		cout<<"-1 -1";
		return 0;
	}
	m[n-1]=n-1;
	for(int i=n-2;i>=0;i--)
		m[i]=((b[m[i+1]].V>b[i].V)?m[i+1]:i);
	int x=0,y=n-1;
	for(int i=0;i<n-1;i++)
	{
		int t=lower_bound(&b[i+1],b+n,mp(mp(b[i].P+d,0),0))-b;
		if(t<n && b[i].V+b[m[t]].V>b[x].V+b[y].V){
			x=i;
			y=m[t];
		}
	}
	cout<<b[x].ind+1<<" "<<b[y].ind+1;
}
