//BE NAME DOOST
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
	int a,b,c,m,n,l;
	cin>>a>>b>>c>>m>>n>>l;
	int r=a/m;
	r=min(r,b/n);
	r=min(r,c/l);
	cout<<r;
}
