//BE NAME DOOST
#include <iostream>
#include <fstream>
#include <cmath>
#include <list>
#include <iomanip>
#include <vector>
#include <string>
#define mp make_pair
using namespace std;
double a,b,c,m,x[6],y[6];
const double eps=1e-10;
int main()
{
	cin>> a >> b >> m;
	c=2*m;
	if( c-a-b>=eps || a-b-c>=eps || b-a-c>=eps ){
		cout<< "Mission impossible\n";
		return 0;
	}
	y[0] = x[1] = y[1] = 0;
	x[0] = a;
	x[5] =  (a * a + b * b - c * c) / (2 * a);
	y[5] =  sqrt(b * b - ((a * a + b * b - c * c) / (2 * a)) * ((a * a + b * b - c * c) / (2 * a)));
	x[4] = (x[5]+x[0])/2;
	y[4] = (y[5]+y[0])/2;
	x[2] = (2*x[4]-x[1]);
	y[2] = (2*y[4]-y[1]);
	for( int i=0 ; i<3 ; i++ )
		cout<< fixed << setprecision(5) << x[i] << ' ' << y[i] << "\n";
	//cout<< sqrt( (x[0]-x[2])*(x[0]-x[2]) + (y[0]-y[2])*(y[0]-y[2]) );
}
