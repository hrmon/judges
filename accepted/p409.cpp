//BE NAME DOOST
#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
using namespace std;
int n,k;
int main()
{
	cin>>n>>k;
	char s[409];
	fill(s,s+(n*n),'.');
	for(int i=0;i<k;i++)s[i]='*';
	int p=0;
	for(int i=0;i<n*n;i++)
	{
		for(int j=0;j<n*n;j++)
		{
			int ind=((n*n-p)%(n*n)+j)%(n*n);
			printf("%c",s[ind]);
		}
		p+=n;
		if((i+1)%n==0)
			p+=(k%n);
		p%=(n*n);
	//	cout<<" "<<p;
		printf("\n");
	}
//	cout<<c;
}
