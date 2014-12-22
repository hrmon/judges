//BE NAME DOOST
#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

string s,t;
int main()
{
	while(getline(cin,s))
	{
	//	cout<<s<<endl;
		stack <bool> c;
		string r;
		for(int i=1;i+1<s.size();i++)
		{
			if((s[i]>='A' && s[i]<='Z')||(s[i]>='a' &&s[i]<='z')){
				r.push_back(s[i]);
			}
			else if(!r.empty() && s[i]!=' '){
					cout<<"<i>"<<r<<"</i>";
					r.clear();
			}

			if(s[i]=='-' || s[i]=='+' || s[i]=='/' || s[i]=='*')
				cout<<"&nbsp;"<<s[i]<<"&nbsp;";
			else if(s[i]=='_')
			{
				i++;
				if(s[i]!='{'){
					if(s[i]>='0' && s[i]<='9')
						cout<<"<sub>"<<s[i]<<"</sub>";
					else
						cout<<"<sub><i>"<<s[i]<<"</i></sub>";
				}
				else
				{
					cout<<"<sub>";
					c.push(0);
				}
			}
			else if(s[i]=='^')
			{
				i++;
				if(s[i]!='{'){
					if(s[i]>='0' && s[i]<='9')
						cout<<"<sup>"<<s[i]<<"</sup>";
					else
						cout<<"<sup><i>"<<s[i]<<"</i></sup>";
				}
				else
				{
					cout<<"<sup>";
					c.push(1);
				}
			}
			else if(s[i]=='}')
			{
				if(c.top()==0)
					cout<<"</sub>";
				else					
					cout<<"</sup>";
				c.pop();
			}
			else if(s[i]=='(' || s[i]==')' || (s[i]>='0' && s[i]<='9'))
				cout<<s[i];
		}
		if(!r.empty()){
					cout<<"<i>"<<r<<"</i>";
					r.clear();
		}

		cout<<endl;
	}	
}
