//BE NAME DOOST
#include <iostream>
using namespace std;
int main()
{
    int a=1,b=1;
    long long s=2;
    int n;
    cin>>n;
    if(n==1){
        cout<<1;
        return 0;
    }
    for(int i=3;i<=n;i++)
    {
        int tmp=a+b;
        s+=tmp;
        a=b;
        b=tmp;

    }
    cout<<s;
}
