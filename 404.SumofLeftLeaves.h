/*
   Find the sum of all left leaves in a given binary tree.

Example:

3
/ \
9  20
/  \
15   7

There are two left leaves in the binary tree, with values 9 and 15 respectively. Return 24.

*/

#include"head.h"

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
	public:
		int dfs(TreeNode *root,int res)
		{
			if(!root) return 0;
			if(!root->left&&!root->right) return res+root->val;
			return dfs(root->left,res)+dfs(root->right,res);
		}
		int sumOfLeftLeaves(TreeNode* root) {
			int res=0;
			dfs(root,res);
			return res;
		}
};
