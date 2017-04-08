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
#define max(x,y) ((x)<(y)?(x):(y))
class Solution {
	public:
		int maxDepth(TreeNode* root) {
			return dfs(root);        
		}
		TreeNode *buildTree()
		{
			int input=0;
			cin>>input;
			TreeNode *root;
			if(input<99)
			{
				root=new TreeNode(input);
				root->left=buildTree();
				root->right=buildTree();
			}	
			return input>=99?NULL:root;
		}
	private:
		int dfs(TreeNode *root)
		{
			if(!root) return 0;
			return max(dfs(root->left)+1,dfs(root->right)+1);
		}
};
