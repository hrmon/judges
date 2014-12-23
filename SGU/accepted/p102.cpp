//BE NAME DOOST
#include <iostream>
#include <vector>
using namespace std;

int gcd(int a,int b)
{
    if(a<b)
        swap(a,b);
    if(b==0)
        return a;
    return  gcd(b,a%b);
}

int main()
{
    int n;
    cin>>n;
    int s=0;
    for(int i=1;i<=n;i++)
        if(gcd(i,n)==1)
            s++;
    cout<<s;
}
