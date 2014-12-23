//BE NAME DOOST
#include <iostream>
#include <fstream>
#include <list>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string a,b;
	cin>>a>>b;
	if(a.size()!=b.size()){cout<<-1;return 0;}
	vector<int> A,B;
	int c=0;
	for(int i=0;i<a.size();i++)
	{
		if(a[i]=='+')
			A.push_back(i);
		if(b[i]=='+')
			B.push_back(i);
	}
	if(B.size()!=A.size()){cout<<-1;return 0;}
	int m=0;
	for(int i=0;i<A.size();i++)
		m+=abs(A[i]-B[i]);
	cout<<m;
}
