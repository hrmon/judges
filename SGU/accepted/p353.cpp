//BE NAME DOOST
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	int n,k1,k2,p1,p2,p3;
	cin>>n>>k1>>k2>>p1>>p2>>p3;
	int s=0;
	if(p1>n)
	{
		cout<<s;
		return 0;
	}
	else
	{
		s+=k1;
		n-=p1;
	}
	if(n/p2<k2)
	{
		cout<<s+n/p2+((n%p2>0)?1:0);
		return 0;
	}
	else
	{
		n-=k2*p2;
		s+=k2;
	}
	s+=n/p3+((n%p3>0)?1:0);
	cout<<s;



}
