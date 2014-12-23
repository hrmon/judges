// BE NAME DOOST
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector <pair<int,int > > A;


int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		A.push_back(make_pair(a,b));
	}
	sort(A.begin(),A.end());
	int c=0;
	for(int i=1;i<n;i++)
	{
		if(A[i].second<A[i-1].second){
			c++;
			swap(A[i],A[i-1]);
		}
	}
	cout<<c;

}
