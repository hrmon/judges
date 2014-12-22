//BE NAME DOOST
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
	return true;
}


int main()
{
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		int n;
		cin>>n;
		vector <int> d;
		int m=sqrt(n);
		for(int i=2;i<=m;i++)
			if(n%i==0)
			{
				d.push_back(i);
				d.push_back(n/i);
			}
		if(d.size()>2 || d.size()==0)
			cout<<"No"<<endl;
		else
		{
			bool r=true;
			for(int i=0;i<d.size();i++){
			//	cout<<d[i]<<" ";
				if(!isPrime(d[i])){
					cout<<"No"<<endl;
					r=false;
				}
			}
			if(r)
				cout<<"Yes"<<endl;
		}
	}
}
