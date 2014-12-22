//BE NAME DOOST
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int t=0;
//	long long c=987654321;
//	cout<<c*c;
	for(long long i=100000000;i<1000000000;i++)
	{
		long long x=(long long)i*i;
		long long c=x%1000000000;
		if(c==987654321)
			t++;
		cout<<c<<endl;
	}
	cout<<t;
}
