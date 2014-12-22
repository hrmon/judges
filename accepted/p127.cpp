//BE NAME DOOST
#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int n,k,a[20];

int main()
{
	while(cin>>k)
	{
	cin>>n;
	int x;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		a[(int)s[0]-'0']++;
	}
	int r=0;
	for(int i=1;i<10;i++)
	{	
		if(i==8)
			continue;
		r+=a[i]/k;
		if(a[i]%k!=0)
			r++;
	}
	cout<<r+2;
	}
	return 0;
}
