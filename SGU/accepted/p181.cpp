//BE NAME DOOST
#include <iostream>
#include <algorithm>
#include <set>
#include <cmath>
#include <vector>
using namespace std;

long long f,a,b,c,m,k;
vector <int> t;
int main()
{
	cin>>f>>a>>b>>c>>m>>k;
	if(k==0)
	{
		cout<<f<<endl;
		return 0;
	}
	long long p=f,pos=-1;
	for(int i=0;i<=m;i++)
	{
		long long tmp=( (a*p*p)%m + (b*p)%m + c%m )%m;
	//	cout<<tmp<<" ";
		int y=-1;
		for(int j=0;j<i;j++)
			if(t[j]==tmp)
			{
				y=j;
				break;
			}
		if(y>-1){
			pos=y;
			break;
		}
		t.push_back(tmp);
		p=tmp;
	}
	//cout<<t.size()<<" "<<pos<<endl;
	int s= t.size();
	if( k<=s ){
		cout<< t[k-1] << endl;
		return 0;
	}
	long long tmp= ( k - s ) % ( s - pos );
	if( tmp==0 )
		tmp= s - pos;
	cout<< t[pos+tmp-1] << endl;
}
