// BE NAME DOOST
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
	long long n,k;
	cin>>n>>k;
	if(n<k){
		cout<<0;
		return 0;
	}
	long long s1=1,s2=1;
	for(int i=1;i<=k;i++)
	{
		s1*=i;
		s2*=n-i+1;
	}
	cout<<(s2/s1)*s2;
}
