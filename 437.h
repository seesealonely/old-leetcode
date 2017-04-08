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
		int dfs(TreeNode* root,int subsum, int sum)
		{
			if(!root) return 0;
			subsum+=root->val;
			if(subsum>sum) subsum=0;
			else if(subsum==sum)
			{
				subsum=0;
				return 1;
			}
			return dfs(root->left,subsum,sum)+dfs(root->right,subsum,sum);
		}
		int pathSum(TreeNode* root, int sum) {

			return dfs(root,0,sum);        
		}
};
