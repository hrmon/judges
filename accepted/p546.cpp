//BE NAME DOOST
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>

using namespace std;
int r[209];
int main()
{
	int n,a,b;
	cin>>n>>a>>b;
		string p;
	cin>>p;
	if(a+b>n){cout<<-1<<endl;return 0;}

	int c0=a,c1=b,c2=n-a-b;
	for(int i=0;i<n;i++){
		if(p[i]=='1')c1--;
		else if(p[i]=='0')c0--;
		else c2--;
	}
	int o=n;
//	cout<<m<<endl;
	for(int i=0;i<n;i++){
		if(p[i]=='0' && c0<0){
				if(c1>0)
				{
					c1--;
					r[i]=1;
				}
				else{
					r[i]=2;
					c2--;
				}
				c0++;
		}
		else if(p[i]=='1' && c1<0)
		{
				if(c0>0)
				{
					c0--;
					r[i]=0;
				}
				else{
					r[i]=2;
					c2--;
				}	
				c1++;
		}
		else if(p[i]=='2' && c2<0){
			if(c0>0){
				r[i]=0;
				c0--;
			}	
			else{
				r[i]=1;
				c1--;
			}
			c2++;
		}
		else
		{
			r[i]=p[i]-'0';
			o--;
		}
	}
	
	cout<<o<<endl;
	for(int i=0;i<n;i++)cout<<r[i];
	cout<<endl;
	//cout<<c1<<" "<<c0;
}
