//BE NAME DOOST
#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool mark[200009]={false};
//int step[20009];
int d[300];
set <int> A[100009];
int main()
{
    int n,x;
    cin>>n>>x;
    fill(mark,mark+x,false);
    //fill(step,step+x,-1);
    for(int i=0;i<n;i++)
    {
        cin>>d[i];
        mark[d[i]]=true;
        A[d[i]].insert(i);
    }
    for(int i=1;i<x;i++)
    {

        if(mark[i])
        {
            //cout<<"$";
            for(int j=0;j<n;j++)
            {
                set <int> tmp=A[i];
                int s=tmp.size();
                tmp.insert(j);
                if(tmp.size()!=s && !mark[i+d[j]])
                {
                    mark[i+d[j]]=true;
                    A[i+d[j]]=tmp;
                }
            }
        }
    }
    if(!mark[x])
        cout<<-1;
    else{
        cout<<A[x].size()<<endl;
        std::set<int>::reverse_iterator rit;
        for (rit=A[x].rend(); rit != A[x].rbegin(); --rit)
            cout<<d[*rit]<<' ';
    }



}
