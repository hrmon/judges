//BE NAME DOOST
#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <set>
#include <stack>
#include <queue>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	string n,r;
	int k;
	cin>>n>>k;
	if(k==0){cout<<n;return 0;}
	int t=n.size()-k;
	int p=0;
	for(int i=0;i<t;i++)
	{
		int m=k+i;
		for(int j=k+i;j>=p;j--)
			if(n[j]>=n[m])
				m=j;
		p=m+1;
		r.push_back(n[m]);
	}
	cout<<r;
}
