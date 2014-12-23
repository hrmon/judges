//BE NAME DOOST
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <stack>
#define B first.first
#define P first.second
#define ind second
#define people pair<pair<int,int>,int>
using namespace std;
const int MAXN=100000+9;
int n;
int p[MAXN],r[MAXN],d[MAXN];
people a[MAXN];
stack <int> out;
int main()
{	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		scanf("%d %d", & a[i].B, & a[i].P );
		a[i].ind=i;
		a[i].P*=-1;
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)a[i].P*=-1;
	
	r[0]=a[0].P;
	d[0]=0;
	int l=1;
	p[0]=-1;
	
	for(int i=1;i<n;i++)
	{
		int j=lower_bound(r,r+l,a[i].P)-r;
	//	cout<<j<<" ";
		if(j!=0)
			p[i]=d[j-1];
		if(j==l || a[i].P<r[j]){
			r[j]=a[i].P;
			d[j]=i;
			if(j>=l){
				l=j+1;
			}
		}
			
	}
		
	cout<<l<<endl;
	int m=d[l-1];
	for(int i=0;i<l;i++)
	{
		out.push(a[m].ind+1);
		m=p[m];

	}
	while (!out.empty())
	{
		printf("%d ",out.top());
		out.pop();
	}

		
}
