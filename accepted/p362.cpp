//BE NAME DOOST
#include <iostream>
#include <string>
using namespace std;
bool mark[1000][1000]={false};
int n,m,x,y;


int main()
{
	cin>>n>>m>>x>>y;
	string moves;
	while(1)
	{
		mark[x][y]=true;
		if(x<n && !mark[x+1][y])
		{x++;moves.push_back('D');}
		else if(y>1 && !mark[x][y-1])
		{y--;moves.push_back('L');}
		else if(x>1 && !mark[x-1][y])
		{x--;moves.push_back('U');}
		else if(y<m && !mark[x][y+1])
		{y++;moves.push_back('R');}
				else
			break;
	}
	cout<<moves;
}
