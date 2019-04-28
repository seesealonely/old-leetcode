/*
Given the root node of a binary search tree (BST) and a value to be inserted into the tree, insert the value into the BST. Return the root node of the BST after the insertion. It is guaranteed that the new value does not exist in the original BST.

Note that there may exist multiple valid ways for the insertion, as long as the tree remains a BST after insertion. You can return any of them.

For example, 

Given the tree:
        4
       / \
      2   7
     / \
    1   3
And the value to insert: 5

You can return this binary search tree:

         4
       /   \
      2     7
     / \   /
    1   3 5

This tree is also valid:

         5
       /   \
      2     7
     / \   
    1   3
         \
          4

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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
	return iterator(root,val);        
    }
    TreeNode* iterator(TreeNode* root, int val) {
       if(!root) return new TreeNode(val); 
	TreeNode *newRoot=root;
	while(true)
	{
		if(root->val<=val)
		{
			if(root->right)
				root=root->right;
			else
			{
				root->right=new TreeNode(val);
				break;
			}
		}
		else
		{
			if(root->left)
				root=root->left;
			else
			{
				root->left=new TreeNode(val);
				break;
			}
		}
	}
	return newRoot;
    }
};
