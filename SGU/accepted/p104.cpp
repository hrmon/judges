//BE NAME DOOST
//YA ALI
/*
ID:   hamidre6
PROG: ariprog
LANG: C++
*/


#include <fstream>
#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{

    int f,v;
    cin>>f>>v;
    int a[109][109];
    for(int i=1;i<=f;i++)
        for(int j=1;j<=v;j++)
   			cin>>a[i][j];
	int t=v-f+1;
	int m[109][109],s[109][109];

	s[1][1]=1;
	m[1][1]=a[1][1];
	for(int i=2;i<=t;i++){
		if(a[1][i]>m[1][i-1])
		{
			m[1][i]=a[1][i];
			s[1][i]=i;
		}
		else
		{
			m[1][i]=m[1][i-1];
			s[1][i]=s[1][i-1];

		}
	}
	
	for(int i=2;i<=f;i++){
		s[i][i]=i;
		m[i][i]=a[i][i]+m[i-1][i-1];
		for(int j=i+1;j<i+t;j++)
		{
			if(m[i][j-1]>a[i][j]+m[i-1][j-1])
			{
				m[i][j]=m[i][j-1];
				s[i][j]=s[i][j-1];
			}
			else
			{
				m[i][j]=a[i][j]+m[i-1][j-1];
				s[i][j]=j;
			}
			
		}
	}

	stack <int> r;
	int p=v;
	for(int i=f;i>0;i--){
		r.push(s[i][p]);
//		cout<<s[i][p]<<" ";
		p=s[i][p]-1;
	}
	
	cout<<m[f][v]<<endl;
	while(!r.empty())
	{
		cout<<r.top()<<" ";
		r.pop();
	}
	
	return 0;
}
