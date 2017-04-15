#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
#include<cctype>
#include<climits>
#include<cmath>
#include<sstream>
#include<stack>
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
	if(input<9)
	{
		root=new TreeNode(input);
		root->left=buildTree();
		root->right=buildTree();
	}	
	return input>=9?NULL:root;
}
void  show(struct TreeNode *root)
{
if(root) cout<<root->val<<" ";
else return;
 show(root->left);
 show(root->right);
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
	for(int i=0;i<v.size();++i)
		cout<<v[i]<<"　";
	cout<<endl;
}
