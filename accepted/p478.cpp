//BE NAME DOOST
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int a,b,n,p[109];
vector <pair<int,int> > t;
int main()
{
	cin>>a>>b>>n;
	int x=b;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
		if(p[i]>x){
			if(a-p[i]+x<0){cout<<"ERROR";return 0;}
			t.push_back(make_pair(p[i]-x,0));
			a-=p[i]-x;
		}
		else if(p[i]<x){
			if(b-x+p[i]<0){cout<<"ERROR";return 0;}
			t.push_back(make_pair(0,x-p[i]));
			b-=x-p[i];
		}
		else
			t.push_back(make_pair(0,0));
		x=p[i];
	}
	for(int i=0;i<n;i++)
		cout<<t[i].first<<" "<<t[i].second<<endl;

}
