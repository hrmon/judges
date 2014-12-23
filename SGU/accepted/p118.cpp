//BE NAME DOOST
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sumDigit(long long n)
{
	int s=0;
	while(n>0)s+=n%10,n/=10;
	return s;
}


int main()
{
	int n;
	cin>>n;
	for(int t=0;t<n;t++)
	{
		int m;
		cin>>m;
		long long mp=1, r=0;
		for(int i=0;i<m;i++)
		{
			int tmp;
			cin>>tmp;
			mp*=tmp;
			mp=sumDigit(mp);
			r+=mp;
		}
		while(r>9)r=sumDigit(r);
		cout<<r<<endl;
	}
}
