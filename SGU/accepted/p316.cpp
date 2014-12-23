//BE NAME DOOST
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int h[10],s[10];
	fill(s,s+n+1,0);
	fill(h,h+n+1,100);

	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		if(h[b]>0)
			s[a]+=3;
		h[b]-=8;
	}
	for(int i=1;i<=n;i++){
		s[i]+=(h[i]>0)?h[i]/2:0;
		cout<<h[i]<<" "<<s[i]<<endl;
	}

}
