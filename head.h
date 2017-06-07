#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<cstring>
#include<cstdio>
#include<map>
#include<algorithm>
#include<cctype>
#include<climits>
#include<cmath>
#include<sstream>
#include<stack>
#include<queue>
using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
struct ListNode *buildList(void)
{
	struct ListNode *head=NULL,*next=NULL;
	bool nohead=true;
	int inputnumber=0;
	cout<<"exit build buildList after input number more than 9"<<endl;
	do{
		cin>>inputnumber;
		if(inputnumber>9)
			break;
		if(nohead)
		{
			head=next=new struct ListNode(inputnumber);
			nohead=false;
		}
		else
		{
			next->next=new struct ListNode(inputnumber);
			next=next->next;	
			next->val=inputnumber;
		}
	}while(nohead||inputnumber<=9);
	return head;
}
struct ListNode *buildList(bool in)
{
	struct ListNode *head=NULL,*next=NULL;
	bool nohead=true;
	int inputnumber=1;
	cout<<"exit build buildList after input number more than 9"<<endl;
	do{
		if(nohead)
		{
			head=next=new struct ListNode(inputnumber);
			head->val=inputnumber++;
			nohead=false;
		}
		else
		{
			next->next=new struct ListNode(inputnumber);
			next=next->next;	
			next->val=inputnumber++;
		}
	}while(nohead||inputnumber<=9);
	next->next=head->next->next->next->next;	
	return head;
}

TreeNode *buildTree()
{
	int input=10;
	cin>>input;
	TreeNode *root;
	if(input<80)
	{
		root=new TreeNode(input);
		root->left=buildTree();
		root->right=buildTree();
	}	
	return input>=80?NULL:root;
}
void  show(struct TreeNode *root)
{
	if(root) cout<<root->val<<" ";
	else return;
	show(root->left);
	show(root->right);
}
void show(vector<TreeNode *> res)
{
for(unsigned int i=0;i<res.size();++i)
	show(res[i]),cout<<endl;
}
void show(struct ListNode *head)
{
	int i=0;

	if(head)
	{
		cout<<"################"<<endl;
		for(struct ListNode *next=head;next;)
		{
			cout<<"Th"<<i<<" "<<next->val<<endl;
			next=next->next;
			i++;
		}
		cout<<"################"<<endl<<endl;;
	}
	//	else exit(0);
}
void show(vector<int> v)
{
	for(unsigned int i=0;i<v.size();++i)
		cout<<v[i]<<"　";
	cout<<endl;
}
void show(vector<string> v)
{
	for(unsigned int i=0;i<v.size();++i)
		cout<<v[i]<<"　";
	cout<<endl;
}
void show(vector<vector<int> > v)
{
	for(unsigned int i=0;i<v.size();++i)
	{
		for(unsigned int j=0;j<v[i].size();++j)
			cout<<v[i][j]<<"　";
	cout<<endl;
	}
}
 // Definition for binary tree with next pointer.
 struct TreeLinkNode {
 int val;
 TreeLinkNode *left, *right, *next;
 TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 };
TreeLinkNode *buildTree(bool i)
{
	int input=10;
	cin>>input;
	TreeLinkNode *root;
	if(input<80)
	{
		root=new TreeLinkNode(input);
		root->left=buildTree(true);
		root->right=buildTree(true);
	}	
	return input>=9?NULL:root;
}
void  show(struct TreeLinkNode *root)
{
	if(root) cout<<root->val<<" ";
	else return;
	show(root->left);
	show(root->right);
}
