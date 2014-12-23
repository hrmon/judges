//BE NAME DOOST
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <set>
#include <cmath>
using namespace std;


int main()
{
	vector <int> r;
	for(int i=0;i<3;i++){
		int a[4];
		for(int j=0;j<3;j++)
			cin>>a[j];
		sort(a,a+3);
		r.push_back(a[1]);
	//	cout<<r[i]<<endl;
	}
	sort(r.begin(),r.end());
	cout<<r[1];


}
