// BE NAME DOOST
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int f(int l,int p)
{
	if(l==1)
		return p;
	int t=l-p+1;
	if(t<=l-l/2)
		return f(l-l/2,t);
	return (l-l/2)+f(l/2,t-(l-l/2));
	
}



int main()
{
	int n,q;
	cin>>n>>q;
	cout<<f(n,q);

}
