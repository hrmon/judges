//BE NAME DOOST
#include <iostream>
#include <fstream>
#include <list>
#include <vector>
#include <string>
#define mp make_pair
using namespace std;
list <pair<int,bool> > R;
bool mark[1000]={false};
pair <int,int> A[1000];

int main()
{
	int n;
	cin>>n;
	int d[9]={0},t[9]={0};
	for(int i=0;i<n;i++){
		cin>>A[i].first>>A[i].second;
		d[A[i].second]++;
		d[A[i].first]++;
	}
//////////////////////////////////
	int c=0;
	for(int i=0;i<7;i++)
		if(d[i]%2==1)
			c++;
	if(c>2){
		cout<<"No solution";
		return 0;
	}
//////////////////////////////////
	R.push_back(mp(0,0));

	mark[0]=true;
	int b=A[0].first,e=A[0].second;
	for(int i=1;i<n;i++)
	{
		
		bool p=false;
		for(int j=1;j<n;j++)
		{
			if(mark[j])continue;
			if(A[j].first==A[j].second && A[j].first==e){
				R.push_back(mp(j,0));
				p=mark[j]=true;
				break;
			}
			else if(A[j].first==A[j].second && A[j].first==b)
			{
				R.push_front(mp(j,0));
				p=mark[j]=true;
				break;
			}
		}
		if(p)continue;
		for(int j=1;j<n;j++)
		{
			if(mark[j])continue;
			if(A[j].first==e)
			{
				e=A[j].second;
				R.push_back(mp(j,0));
				mark[j]=true;
				break;
			}
			else if(A[j].second==e)
			{
				e=A[j].first;
				R.push_back(mp(j,1));
				mark[j]=true;
				break;
			}
			else if(A[j].first==b)
			{
				b=A[j].second;
				R.push_front(mp(j,1));
				mark[j]=true;
				break;
			}
			else if(A[j].second==b)
			{
				b=A[j].first;
				R.push_front(mp(j,0));
				mark[j]=true;
				break;
			}
		}
	}
	while(!R.empty()){
		cout<<R.front().first;
		string o=(R.front().second)?" +":" -";
		cout<<o<<endl;
		R.pop_front();
	}
}
