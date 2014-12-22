//BE NAME DOOST
#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;

int main()
{
	int n;
	cin>>n;
	set <string> s;
	for(int i=0;i<n;i++)
	{
		string tmp;
		cin>>tmp;
		s.insert(tmp);
	}
	for (set<string>::iterator it=s.begin(); it!=s.end(); ++it)
    	cout<<*it;
}
