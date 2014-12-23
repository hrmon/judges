//BE NAME DOOST
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <list>
#include <set>
#include <stack>
#include <queue>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
int n;
bool m[1000009];
vector <int> a;

int main()
{
	cin>>n;
	fill(m,m+n+10,true);
	for(int i=2;i<=sqrt(n);i++)
		if(m[i])
			for(int j=i*i;j<=n;j+=i)
				m[j]=false;
	
	for(int i=3;i<n-1;i++)
		if(m[i] && m[i+2])
			a.push_back(i);
	cout<<a.size()<<endl;
	for(int i=0;i<a.size();i++)
		cout<<2<<" "<<a[i]<<endl;



}
