//BE NAME DOOST
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set>
#include <cmath>
#include <cstdio>
using namespace std;

int gcd(int a,int b)
{
	if(a<b)
		swap(a,b);
	if(b==0)
		return a;
	return gcd(b,a%b);
}

int main()
{

	int n,m;
	while(scanf("%d %d",&n,&m)!=EOF){
		int r;
		if(n==0 || m==0)
			r=0;
		else if(n==m)
			r=1;
		else if((n+m)%2==1 || (n+m)%4!=0 )
			r=-1;
		else{
			int x=(n+m)/2,y=gcd(n,m);
			while(x%2==0)x/=2;
			while(y%2==0)y/=2;
			if(x!=y)
				r=-1;
			else
				r=log2((n+m)/2/gcd(n,m))+1;
		}
		cout<<r<<endl;
	}
}
