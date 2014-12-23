//BE NAME DOOST
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	long double l;
	int n;
	cin>>l>>n;
	long long s=0;
	long long x=10000*l;
	for(int i=0;i<n;i++)
	{
		long long a,b;
		cin>>a>>b;
		s+=(a*b*10000)%x;
		s%=x;
	}
	//cout<<s<<endl<<ceil(l);
//	cin>>n;
	
	if(s<x-s)
		cout<<fixed<<setprecision(4)<<(double)s/10000<<endl;
	else
		cout<<fixed<<setprecision(4)<<(double)(x-s)/10000<<endl;
	
}
