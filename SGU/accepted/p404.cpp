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
	int n,m;
	cin>>n>>m;
	string s[109];
	for(int i=0;i<m;i++)
		cin>>s[i];
	int p=(n%m==0)?m:n%m;
	cout<<s[p-1];
}
