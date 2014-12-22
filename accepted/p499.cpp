//BE NAME DOOST
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iostream>
using namespace std;
const int MAXN=1000009;
short int d[MAXN]={0};
int n;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int tmp;
		cin>>tmp;
		int s=sqrt(tmp);
		for(int j=1;j<=s;j++)
		{
			if(tmp%j==0)
			{
				if(d[j]<2)d[j]++;
				if(j!=tmp/j && d[tmp/j]<2)d[tmp/j]++;
			}
		}
	}
	for(int i=MAXN;i>0;i--)
		if(d[i]>1)
		{
			cout<<i;
			return 0;
		}
	
}
