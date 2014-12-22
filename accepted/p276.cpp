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
	if(m<=n){cout<<0;return 0;}
	int l=(m-n)/60;
	if(l<5)cout<<1;
	else if(l<15)cout<<2;
	else if(l<30)cout<<3;
	else cout<<4;
}
