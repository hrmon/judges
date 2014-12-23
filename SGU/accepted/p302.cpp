//BE NAME DOOST
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <list>
#include <set>
#include <stack>
#include <queue>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
//	cout<<(int)'a'<<endl<<(int)'A';
	string s,r;
	cin>>s;
	stack <bool> p;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!='<')
		{
			if(p.empty())
				r.push_back(s[i]);
			else if(p.top() && s[i]>='a')
				r.push_back( s[i]-32 );
			else if(!p.top() && s[i]<'a')
				r.push_back( s[i]+32 );
			else
				r.push_back(s[i]);
				
		}
		else
		{
			if(s[i+1]=='/'){
				if(p.top()) i+=4;
				else i+=6;
				p.pop();
			}
			else if(s[i+1]=='U') { p.push(true);i+=3; }
			else { p.push(false);i+=5; }
		}
	}
	cout<<r;
}
