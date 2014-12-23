//BE NAME DOOST
#include <iostream>
#include <vector>
using namespace std;
const int N=6*1000+9;
double x[N], n;
bool mark[N];
vector <int> t;
void init()
{
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>x[i];
}

void solve()
{
	double s=0;
	for(int i=0;i<n;i++){
		bool found=false;
		for(int j=0;j<n;j++)
			if(!mark[j] && ((x[j]>=2 && s<=2*i)||(x[j]<=2 && s>=2*i)))
			{
				mark[j]=true;
				s+=x[j];
				t.push_back(j+1);
				found=true;
				break;
			}
		if(!found){
			cout<<"no";
			return;
		}
	}

	cout<<"yes\n";
	for(int i=0;i<n;i++)
		cout<<t[i]<<" ";

}




int main()
{
	init();
	solve();
}
