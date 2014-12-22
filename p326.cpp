//BE NAME DOOST
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int n,p[50],g[50],m;

int main()
{
	cin>>n;
	for(int i=0;i<n;i++)cin>>p[i];
	for(int i=0;i<n;i++)cin>>g[i];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			cin>>m;
			if(i>j || i==0 || j==0 || i==j)continue;
			
			if(p[i]>p[j])
			{
				if(m<p[i]-p[j])
					p[j]+=m;
				else{	
					int d=m-(p[i]-p[j]);
					p[j]=p[i]+floor((float)d/2);
					p[i]+=ceil((float)d/2);
				}
			}
			else
			{
				if(m<p[j]-p[i])
					p[i]+=m;
				else{
					int d=m-(p[j]-p[i]);
					p[i]=p[j]+floor((float)d/2);
					p[j]+=ceil((float)d/2);
				}
			}
		}
	sort(p+1,p+n);
	if(p[0]+g[0]>=p[n-1])
		cout<<"YES";
	else
		cout<<"NO";	
}
