//BE NAME DOOST
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
struct node
{
	char val;
	node *left,*right;
	node (char v)
	{
		val=v;
		left=right=NULL;
	}
};


int main()
{
	string s;
	cin>>s;
	
	node *root=new node('$');

	node *cur;
	cur=root;
	for(int i=0;i<s.size();i++)
	{
		
		if(s[i]=='L' && cur->val!='$')
			cur=cur->left;
		else if(s[i]=='R' && cur->right!=NULL)
			cur=cur->right;
		else if(s[i]!='R' && s[i]!='L')
		{
			node *tmp=new node(s[i]);
			tmp->right=cur->right;
			tmp->left=cur;
			if(cur->right!=NULL)
				cur->right->left=tmp;
			cur->right=tmp;
			cur=cur->right;
		}		
	}
	
	cur=root;
	while(cur!=NULL)
	{
		if(cur->val!='$')
			cout<<cur->val;
		cur=cur->right;
	}
}
