//BE NAME DOOST
#include <iostream>
using namespace std;
int r[10009];
bool o[10009]={false};
int a[10009];
int main()
{
	int n;
	cin>>n;
	
	int s=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s+=a[i];
	}
	int p=0;
	for(int i=0;i<n;i++)
	{
		r[i]=(a[i]*100)/s;
		if((a[i]*100)%s!=0)
			o[i]=true;
		p+=r[i];
	}
	int j=0;
	while(p<100){
		if(j>=n){cout<<"No solution";return 0;}
		if(o[j]){
			r[j]++;
			p++;
		}
		j++;
	}
	for(int i=0;i<n;i++)
		cout<<r[i]<<" ";
	

}
