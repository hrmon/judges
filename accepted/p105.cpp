//BE NAME DOOST
#include <iostream>
using namespace std;
int main()
{
    long long a;
    cin>>a;
    long long x=(a/3);
    x*=2;
    if(a%3==2)
        x++;
    cout<<x;
}
