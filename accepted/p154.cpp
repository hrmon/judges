//BE NAME DOOST
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n;

int c(int x){
	int z=0;
	while(x>0){
		z+=x/5;
		x/=5;
	}
	return z;
}
int main()
{
	cin>>n;
	long long s=0,f=5*1e8;
	while(f-s>1)
	{
		int m=(long long)(f+s)/2;
		if(c(m)>=n)
			f=m;
		else
			s=m;
	}
	if(c(f)==n)
		cout<<f;
	else
		cout<<"No solution"<<endl;
	return 0;
}
