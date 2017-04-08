#include<iostream>
#include<vector>
#include<stack>
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
		vector<int> postorderTraversal(TreeNode* root) {
			stack<TreeNode *> st;
			vector<int> res;        
			st.push(root);
			TreeNode * tmp;
			while(!root)
			{
				tmp=st.top();
				if(tmp->left)	
					st.push_back(tmp->left);
				else if(tmp->right)
					st.push_back(tmp->right);	
				else 
				{
					res.push_back(tmp->val);
				}
			}
		}
};
