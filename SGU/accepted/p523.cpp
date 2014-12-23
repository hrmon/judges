//BE NAME DOOST
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <iostream>
using namespace std;
int n,f;
int a[109];
bool mark[109];


int main()
{
	
	cin>>n>>f;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int p=0;
	vector <int> r;
	for(int i=0;i<n;i++)
	{
		int t=-1;
		vector <int> o;
		bool s=true;
		mark[p]=true;
		for(int j=0;j<n;j++){
			if(!mark[j] && a[j]>min(f,a[p]) && a[j]<max(f,a[p]) ){
				mark[j]=true;
				o.push_back(a[j]);
			}
			else if(s && !mark[j]){
				t=j;
				s=false;
			}
		}
		
		if(o.size()>0){
			sort(o.begin(),o.end());
			if(a[p]<f)
				reverse(o.begin(),o.end());
			for(int j=0;j<o.size();j++)
				r.push_back(o[j]);
		}
		r.push_back(a[p]);
		f=a[p];
		p=t;
		if(s)
			break;	
	}
	for(int i=0;i<r.size();i++)
		cout<<r[i]<<" ";

	
}
