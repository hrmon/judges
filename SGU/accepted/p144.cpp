//BE NAME DOOST
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cstdio>
#include <iomanip>
using namespace std;
const int MAXN=10019;
double n , m , k , x , y ;
long long ans;
int main()
{
	cin>> n >> m >> k;
	x= ( m-n ) *60;
	y= ( k/x + ((x-k)/x) * k/x );
	printf("%.7lf\n",y);
}
