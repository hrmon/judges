//BE NAME DOOST
#include <iostream>
using namespace std;
int k,ans=1;
int x[10] = { 1, 3, 2, 6, 4, 5 };
int main()
{
	cin>> k;
	if( k==1 ){ cout<< "8\n"; return 0; }
		
	if( (k-1)%3 == 0 ) ans+=2;
	if( (k-1)%3 == 0 )
	{
		int s=0;
		for( int i=1 ; i<k ; i++ )
			s= (s*10 + 1 ) % 7;
		s = s*10 +7;
		if( s%7 == 0 )
			ans++;
	}
	cout<< ans << endl;
}

