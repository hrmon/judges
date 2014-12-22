//BE NAME DOOST
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAXN=109;
bool mark[MAXN];
pair<int,int> a[5010];
int n=0,r=0,m=0,c=0;
pair<int,int> p[5010];

int main()
{

	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>p[i].first;
		p[i].second=i;
	}
	sort(p,p+m);
	for(int i=1;i<=n;i++)
	{
		int x=i,s=0;
		while(x>0)
		{
			s+=x%10;
			x/=10;
		}
		if(!mark[i%100]){
			r++;
			if(c<m  && r==p[c].first)
			{
				while(r==p[c].first)
				{
					a[c].first=p[c].second;
					a[c].second=i;
					c++;
				}
			}
		}
		mark[(i+s)%100]=true;
		mark[i%100]=false;

	}
	sort(a,a+m);
	cout<<r<<endl;

	for(int i=0;i<m;i++)
		cout<<a[i].second<<" ";
	cout<<endl;	
}

