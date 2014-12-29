//BE NAME DOOST
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
const int N=100+10;
int n;
string s[N],ans;
bool m[N];
bool cmp(string a ,string b)
{
	return (string)a+b < (string)b+a;
}
int main()
{
	cin>> n;
	for( int i=0 ; i<n ; i++ )
		cin>> s[i];
	sort(s ,s+n ,cmp);
	for(int i=0; i<n ;i++)cout<<s[i];
}
