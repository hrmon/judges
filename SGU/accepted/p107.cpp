//BE NAME DOOST
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int n;
	cin>> n;
	if( n<9 ) cout << 0 << endl;
	else if( n==9 ) cout<< 8 << endl;
	else{
		cout<<72;
		for(int i=0 ; i<n-10 ; i++)
			cout<<0;
		cout<<endl;
	}
}
