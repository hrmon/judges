//BE NAME DOOST
#include <iostream>
#include <vector>
#include <cmath>
#include <set>
#include <algorithm>
#define X first.first
#define Y first.second
#define mp make_pair
#define ind second
using namespace std;
const int MAXN=50000+9;
vector<pair<pair<int,int>,int> > a;
int n,l[MAXN],r[MAXN],p[MAXN];
int A[MAXN][20];

int Q(int c,int b)
{
	int l=log2(b-c);
	return (a[ A[c][l] ].Y<a[ A[b-(1<<l)+1][l] ].Y )?A[c][l]:A[b-(1<<l)+1][l];
}
void maketree(){	
	for(int j=0;j<=log2(n);j++){
		for(int i=0;i<n-(1<<j)+1;i++)
		{
			if(j==0)
				A[i][j]=i;
			else
			{
				if(a[ A[i][j-1] ].Y< a[ A[i+(1<<(j-1))][j-1] ].Y)
					A[i][j]=A[i][j-1];
				else
					A[i][j]=A[i+(1<<(j-1))][j-1];
			}
		}
	}
}

void doit( int s , int f , int pp )
{
	int tmp= Q(s,f);
	p[ a[tmp].ind ]= (pp==-1?0:a[pp].ind);
	if( pp!=-1 && tmp < pp )
		l[ a[pp].ind ] = a[tmp].ind;
	else if( pp!=-1 && tmp > pp )
		r[ a[pp].ind ] = a[tmp].ind;
	if( tmp-1 >= s)
		doit(s , tmp-1 , tmp);
	if( f >= tmp+1 )
		doit(tmp+1 , f , tmp);
}

int main()
{
	cin>>n;
	for( int i=0 ; i<n ; i++ )
	{
		int v,u;
		cin>>v>>u;
		a.push_back( mp( mp( v , u ) , i+1 ) );
	}
	sort(a.begin(),a.end());
//	reverse(r.begin(),r.end());
	maketree();
	doit(0,n-1,-1);
	cout<<"YES\n";
	for( int i=1 ; i<=n ; i++ )
		cout<< p[i] << ' ' << l[i] << ' ' << r[i] << endl;
}

