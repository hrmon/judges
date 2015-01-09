//BE NAME DOOST
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std; 

int x,y;
vector<int> r;
bool v[1000000+9];
int main()
{
	cin>> y >> x;
	y %= x;
	if( y==0 ){ cout<<"0 0\n"; return 0; }
	while( !v[y] )
	{
		r.push_back( y );
		v[y] = 1;
		y = (y*10)%x;
		if( y==0 )
		{
			cout<< r.size() << " 0\n";
			return 0;
		}
	}
	for(int i=r.size()-1 ; i>=0 ; i-- )
		if( y==r[i] )
		{
			cout<< i << ' ' << r.size()-i << "\n";
			break;
		}
}
