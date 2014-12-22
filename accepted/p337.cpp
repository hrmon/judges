//BE NAME DOOST
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;
int k;
string s;
set<string>t;
bool m[2009];
int main()
{
	cin>>k>>s;
	for(int i=s.size()/2;i>0;i--)
	{
		fill(m,m+2009,0);
		for(int j=0;j<s.size();j++)
			if(s[j]!=s[(j+i)%s.size()])
				m[j]=1;
		int b=0;
		for(int j=0;j<i;j++)
			if(m[j])
				b++;
		for(int j=0;j<s.size();j++)
		{
			if(b<=k){
				string r;
				for(int l=0;l<2*i;l++)
					r.push_back(s[(j+l)%s.size()]);
				t.insert(r);
			}
			b+=-m[j]+m[(j+i)%s.size()];
		}
		if(t.size()){
			cout<<*t.begin()<<endl;
			return 0;
		}
	}
	cout<<endl;
			
}
