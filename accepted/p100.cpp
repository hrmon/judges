#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream cin ("input");
	ofstream cout ("output");
	int a,b;
	cin>>a>>b;
	cout<<a+b;
}
