// BE NAME DOOST
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
int n;
int main()
{
	cin>> n;
	int x=(n%2 ? n : n-1);
	cout<< (n==1 ? 0 : x ) << "\n";

	for( int i=0 ; i<x ; i++){
		for( int j=0 ; j<x ; j++ ){
			if( i==j )
				printf("0 ");
			else
				printf("%d ", ( (i+j)%x==0 ? x : (i+j)%x ) );
		}
		if(n%2==0)
			printf("%d", ( (i+i)%x==0 ? x : (i+i)%x ) );
		printf("\n");
	}
	if(n%2==0)
	{
		for(int i=0 ; i<x ; i++)
			printf("%d ",  ( (i+i)%x==0 ? x : (i+i)%x ) );
		printf("0\n");
	}
}

