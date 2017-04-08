#include<iostream>
#include<vector>
using namespace std;
/**
 * Definition for a binary tree node.
 */
struct TreeNode 
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution
{
	public:
		TreeNode *buildTree()
		{
			const int max=99;
			int input=0;
			cin>>input;
			TreeNode *root;
			if(input<max)
			{
				root=new TreeNode(input);
				root->left=buildTree();
				root->right=buildTree();
			}	
			return input>=max?NULL:root;
		}
		int sumOfLeftLeaves(TreeNode* root)
		{
			int res=0;
			dfs(root,res);
			return res;
		}
		int dfs(TreeNode *root,int &res)
		{
			if(!root) return 0;
			res+=dfs(root->left,res);
			if(!root->left&&!root->right)
			return root->val;
			dfs(root->right,res);
		}
};

