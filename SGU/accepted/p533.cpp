//In The Name of Allah
#include <vector>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int d=n/14,r=n%14;
	if(d==0 || (d==1 && r!=7) || r>12 || r<2 )
		cout<<-1;
	else
		cout<<d;

}
