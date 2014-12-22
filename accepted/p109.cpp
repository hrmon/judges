//BE NAME DOOST
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n>2)
	{
		cout<<n<<" ";
		for(int i=2;i<n;i++)
			for(int j=i;j<n;j++)
				cout<<n*j+n-j+i<<" ";
		cout<<endl;
	}
	cout<<101<<" ";
	for(int j=1;j<n;j++)
		cout<<j*n+n-j+1<<" ";
	cout<<endl;
	for(int i=n;i>1;i--)
	{
		cout<<100+i*2-1<<" ";
		for(int j=0;j<i;j++)
			cout<<n*j+i-j<<" ";
		cout<<endl;
	}
}
