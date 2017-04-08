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
    bool isSymmetric(TreeNode* root) {
	dfs(root);
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
