//BE NAME DOOST
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int sum=0;
	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		tmp=pow(tmp,k);
		if(tmp>0)
			sum+=tmp;
	}
	cout<<sum;

}
