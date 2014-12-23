//BE NAME DOOST
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	switch(m)
	{
		case 1:
		case 10:
			 if(n<32){
				 cout<<((n%7==0)?7:n%7);
				 return 0;
			 }
			break;
		case 2:
			if(n<29){
				 cout<<(((n+3)%7==0)?7:(n+3)%7);
				 return 0;
			}
			break;
		case 3:
			 if(n<32){
				 cout<<(((n+3)%7==0)?7:(n+3)%7);
				 return 0;
			 }
			 break;
		case 4:
			 if(n<31){
				 cout<<(((n+6)%7==0)?7:(n+6)%7);
				 return 0;
			 }
			 break;
		case 5:
			 if(n<32){
				 cout<<(((n+1)%7==0)?7:(n+1)%7);
				 return 0;
			 }
			 break;
		case 6:
			 if(n<31){
				 cout<<(((n+4)%7==0)?7:(n+4)%7);
				 return 0;
			 }
			 break;
		case 7:
			 if(n<32){
				 cout<<(((n+6)%7==0)?7:(n+6)%7);
				 return 0;
			 }
			 break;
		case 8:
			 if(n<32){
				 cout<<(((n+2)%7==0)?7:(n+2)%7);
				 return 0;
			}
			 break;
		case 9:
			 if(n<31){
				 cout<<(((n+5)%7==0)?7:(n+5)%7);
				 return 0;
			 }
			 break;
		case 11:
			 if(n<31){
				 cout<<(((n+3)%7==0)?7:(n+3)%7);
				return 0;
			}
			 break;
		case 12:
			 if(n<32){
				 cout<<(((n+5)%7==0)?7:(n+5)%7);
				 return 0;
			 }
			 break;
	}
	cout<<"Impossible";
}
