//BE NAME DOOST
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

string s,r;
int n;
int main()
{
	cin>>n;
	getline(cin,s);
	for(int j=0;j<n;j++)
	{
		r.clear();
		r.push_back('"');
		getline(cin,s);
		int c=0,i=1;
		bool p=true,t=true;
		while(s[i]==' ')i++;
		for(;i<s.size();i++)
		{
			if(s[i]!=' ' && s[i]!='-' && p)
				r+=s[i];
			if(s[i]=='-' || s[i]==' ')
				p=false;
			if(s[i]=='-')
				c++;
			if(s[i]!='-' && s[i]!=' ' && !p)
			{
				if(c==0 && i!=s.size()-1 && r[r.size()-1]!='"')
					r+=" ";
				else if(c==1){
					if(i==s.size()-1 || r[r.size()-1]=='"')
						t=false;
					r+='-';
				}
				else if(c%2==0 && c>0 ){
					for(int l=0;l<c/2;l++)
						r+=" --";
					r+=" ";
				}
				else if(c>0){
					for(int l=0;l<c/3-1;l++)
						r+=" ---";
					if(c%3==1)
						r+=" -- --";
					else if(c%3==2)
						r+=" --- --";
					else
						r+=" ---";
					r+=" ";
				}
				r+=s[i];
				c=0;
				p=true;
			}
		}
		if(t)
			cout<<r<<endl;
		else
			cout<<"error"<<endl;
	}
}
