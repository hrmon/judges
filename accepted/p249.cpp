//BE NAME DOOST
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int f[2000000],s[2000000];
int n,m;
void make(int r,int *t)
{
	int c=(1<<r);
	for(int i=0;i<c;i++)
		t[i+c]=t[c-i-1]+(1<<r);
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
		make(i,f);
	for(int i=0;i<m;i++)
		make(i,s);
	for(int i=0;i<(1<<n);i++)
	{
		for(int j=0;j<(1<<m);j++)
		{
			printf("%d ", ((f[i]<<m)+s[j]) );
		}
		printf("\n");
	}	
}
