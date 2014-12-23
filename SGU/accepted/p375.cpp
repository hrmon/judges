//BE NAME DOOST
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <set>
#include <cmath>
using namespace std;


int main()
{
	int n;
	cin>>n;
	int c[10009];
	c[1]=1;
	cout<<"1 ";
	for(int i=2;i<=n;i++)
	{
		set <int> d;
		int s=sqrt(i);
		for(int j=2;j<=s;j++)
			if(i%j==0)
			{
				d.insert(c[j]);
				d.insert(c[i/j]);
			}
		c[i]=d.size()+2;	
		cout<<c[i]<<" ";
	}
}
