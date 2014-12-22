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
	for(int i=0;i<m+1;i++)
	{
		long long tmp=( ((long long)a*p*p)%m + (b*p)%m + c%m )%m;
	//	cout<<tmp<<" ";
		int y=-1;
		for(int j=0;j<t.size();j++)
			if(t[j]==tmp)
			{
				y=j;
				break;
			}
		if(y>-1 && !f){
			pos=y;
			break;
		}
		t.push_back(tmp);
		p=tmp;
	}
	//cout<<t.size()<<" "<<pos<<endl;
	if(k<=t.size()){
		cout<<t[k-1]<<endl;
		return 0;
	}
	long long tmp=(k-t.size())%(t.size()-pos);
	if(tmp==0)
		tmp=t.size()-pos;
	cout<<t[pos+tmp-1]<<endl;
}
