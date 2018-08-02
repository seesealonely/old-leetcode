/*
 Given the root of a tree, you are asked to find the most frequent subtree sum. The subtree sum of a node is defined as the sum of all the node values formed by the subtree rooted at that node (including the node itself). So what is the most frequent subtree sum value? If there is a tie, return all the values with the highest frequency in any order.

Examples 1
Input:

  5
 /  \
2   -3

return [2, -3, 4], since all the values happen only once, return all of them in any order.

Examples 2
Input:

  5
 /  \
2   -5

return [2], since 2 happens twice, however -5 only occur once.

Note: You may assume the sum of values in any subtree is in the range of 32-bit signed integer. 
*/
#define c11
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
    vector<int> findFrequentTreeSum(TreeNode* root) {
	unordered_map<int,int> h;
	int maxi=0;
	count(root,h,maxi);        
	vector<int> maxSums;
	for(std::unordered_map<int,int>::iterator p=h.begin();p!=h.end();++p)
	if(maxi==p->second) maxSums.push_back(p->first);	
	return maxSums;
    }
int count(TreeNode *root,unordered_map<int,int> & h,int & maxi)
	{
		if(!root) return 0;
		int sum=root->val;
		sum+=count(root->left,h,maxi);
		sum+=count(root->right,h,maxi);
		++h[sum];
		maxi=max(maxi,h[sum]);
		return sum;
	}
};
