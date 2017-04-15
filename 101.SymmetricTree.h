/*
Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

For example, this binary tree [1,2,2,3,4,4,3] is symmetric:

    1
   / \
  2   2
 / \ / \
3  4 4  3

But the following [1,2,2,null,3,null,3] is not:

    1
   / \
  2   2
   \   \
   3    3

Note:
Bonus points if you could solve it both recursively and iteratively. 
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
    bool isSymmetric(TreeNode* root) {
        	return dfs(root);
    }
private:
	bool dfs(TreeNode *root)
	{
		if(!root) return true;
		if(!root->left&&!root->right)
		return true;
		if(!root->left&&root->right)
		return false;
		if(!root->left&&!root->right)
		return false;
		if(root->left->val==root->right->val)
		dfs(root->left)&dfs(root->right);
	
    }
};
