//BE NAME DOOST
#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	bool c=false;
	int t=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]==')')
		{
			if(c)
				c=false;
			else
				t++;
		}
		else if(s[i]=='(')
		{
			if(c)
				t++;
			else
				c=true;
		}
		else if( !(s[i]>='a' && s[i]<='z') 
			&& !(s[i]>='A' && s[i]<='Z')
			&& s[i]!=' ' && c)
		{
			//cout<<s[i]<<" ";
			c=false;
			t++;
		}

	}
	if(c)
		t++;
	cout<<t;
}
