//BE NAME DOOST
#include <iostream>
#include <vector>
#include <map>
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
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string a;
		cin>>a;
		int e=a.size()-1;
		if(a[e]=='x' || a[e]=='s' || a[e]=='o' || (a[e]=='h' && a[e-1]=='c')) a+="es";	
		else if(a[e]=='y'){a[e]='i';a+="es";}
		else if(a[e]=='f'){a[e]='v';a+="es";}
		else if(a[e]=='e' && a[e-1]=='f'){a[e-1]='v';a+='s';}
		else a+='s';	
		
		cout<<a<<endl;
	}
}
