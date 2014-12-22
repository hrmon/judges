// BE NAME DOOST
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

pair<int,int > A[100];


int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>A[i].second;
	for(int i=0;i<n;i++)
		cin>>A[i].first;
	sort(A,A+n);
	reverse(A,A+n);
	int t=A[0].first+A[0].second;
	int l=A[0].second;
	for(int i=1;i<n;i++)
	{
	//	cout<<t<<endl;
		if(A[i].first+A[i].second+l>t)
			t=A[i].first+A[i].second+l;
		
		
		l+=A[i].second;
	}
	cout<<t;

}
