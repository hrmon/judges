//BE NAME DOOST
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
class Int {
public:
    vector <int> dig;
    bool sign;
    Int () { sign=true;}
    void make_good () {
        int carry=0;
        for (int i=0;i<(int)dig.size();i++) {
            dig[i]+=carry;
            carry=dig[i]/10;
            dig[i]%=10;
        }
        while (carry!=0) {
            dig.push_back(carry%10);
            carry/=10;
        }
    }
    void mult (int a) {
        for (int i=0;i<(int)dig.size();i++)
            dig[i]*=a;
        make_good();
    }
};

int main()
{
	int a,b;
	cin>>a>>b;
	Int x,y;
	x.dig.push_back(a);
	x.make_good();
	y.dig.push_back(b);
	y.make_good():
	for(int i=0;i<b;i++)
		x.mult(a);
	for(int i=0;i<a;i++)
		y.mult(b);
	
}
