//BE NAME DOOST
#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string x;getline(cin,x);
	for(int i=0;i<n;i++)
	{
		string s;
		getline(cin,s);
		bool a=false,p=true;
		int c=0,t=-1;
		if(s[0]=='@' || s[0]=='.')
			p=false;

		for(int j=0;j<s.size();j++)
		{	
			if(s[j]=='@'){
				if(s[j-1]=='.' || a)
					p=false;
				a=true;
			}
			else if(s[j]=='.')
			{
				if(s[j-1]=='.' || s[j-1]=='@')
					p=false;
				c=0;
				t=j;
			}
			else if((s[j]>='a' && s[j]<='z') || (s[j]>='A' && s[j]<='Z'))
				c++;
			else if( s[j]!='_' && s[j]!='-' && (s[j]<'0' || s[j]>'9') )
				p=false;
		}
		if((c==2 || c==3) && t!=-1 && s.size()-t-1==c && a && p)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
