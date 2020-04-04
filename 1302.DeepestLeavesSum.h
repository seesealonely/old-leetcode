/*
Given a binary tree, return the sum of values of its deepest leaves.

 

Example 1:

Input: root = [1,2,3,4,5,null,6,7,null,null,null,null,8]
Output: 15

 

Constraints:

    The number of nodes in the tree is between 1 and 10^4.
    The value of nodes is between 1 and 100.
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
    int deepestLeavesSum(TreeNode* root) {
	queue<TreeNode *> q;
	int res=0;
	q.push(root);        
	while(!q.empty())
	{
		res=0;
	for(int i=q.size();i>0;i--)
	{
		TreeNode *cur=q.front();q.pop();
		res+=cur->val;
		if(cur->left) q.push(cur->left);
		if(cur->right) q.push(cur->right);
	}
	}
	return res;
    }
};
