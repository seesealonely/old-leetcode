#include<iostream>
using namespace std;
/**
 * Definition for a binary tree node.
 */
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
	public:
		TreeNode *buildTree()
		{
			int input=0;
			cin>>input;
			TreeNode *root;
			if(input<9)
			{
				root=new TreeNode(input);
				root->left=buildTree();
				root->right=buildTree();
			}	
			return input>=99?NULL:root;
		}
		bool isValidBST(TreeNode* root) {
		return dfs(root);
		}
	private:
		bool dfs(TreeNode *root)
		{
			if(!root) return true;
			bool l,r;
			if(root->left&&root->val>root->left->val)
				l=dfs(root->left);
			else return false;
			if(root->right&&root->val<root->right->val)
			r=dfs(root->right);
			else return false;
			return l&&r;
		}
};
