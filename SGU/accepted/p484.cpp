//BE NAME DOOST
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int n,m,x,y;
string s[109];
int move(int a,int b)
{
	if((int)s[a][b]==92)
	{
		if(b==m-1 || s[a][b+1]=='/')
			return -1;
		if((int)s[a][b+1]==92)
		{
			if(a==n-1)
				return b+2;
			return move(a+1,b+1);
		}
		return move(a,b+1);
	}
	if(s[a][b]=='/')
	{
		if(b==0 || (int)s[a][b-1]==92)
			return -1;
		if(s[a][b-1]=='/')
		{
			if(a==n-1)
				return b;
			return move(a+1,b-1);
		}
		return move(a,b-1);
	}
	if(a==n-1)
		return b+1;
	return move(a+1,b);
}


int main()
{
	
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>s[i];
		if(s[i].find('P')!=string::npos)
		{
			x=i;
			y=s[i].find('P');
		}
	}
//	cout<<x<<" "<<y<<endl;
	cout<<move(x,y);

}
