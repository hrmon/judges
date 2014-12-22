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
	int r=0;
	for(int i=0;i<m;i++)
	{
		int tmp;
		cin>>tmp;
		r=(r+(tmp%n))%n;
	}
	cout<<r;
}
