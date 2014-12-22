//BE NAME DOOST
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++){
			if( (j+(i%3))%3==2 )
				cout<<'#';
			
			else
				cout<<'0';
		}
		cout<<endl;
	}
}
