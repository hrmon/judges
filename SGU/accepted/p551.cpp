//In The Name of Allah
#include <vector>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
	int n,t1,t2;
	cin>>n>>t1>>t2;
	int c=0, tc=1;
	
	while(c<n)
	{
		if(tc%t2==0)
			c++;
		if(tc%t1==0)
			c++;
		tc++;
	}
	tc--;
	if(tc%t1!=0){
		c++;
		tc=((tc/t1+1)*t1);
	}
	else if(tc%t2!=0)
	{
		c++;
		tc=((tc/t2+1)*t2);
	}
	if(tc==0)
		tc=max(t1,t2);
	cout<<c<<" "<<tc;
}
