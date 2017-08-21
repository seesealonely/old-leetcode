/*
   Given an integer array with no duplicates. A maximum tree building on this array is defined as follow:

   The root is the maximum number in the array.
   The left subtree is the maximum tree constructed from left part subarray divided by the maximum number.
   The right subtree is the maximum tree constructed from right part subarray divided by the maximum number.

   Construct the maximum tree by the given array and output the root node of this tree.

   Example 1:

Input: [3,2,1,6,0,5]
Output: return the tree root node representing the following tree:

6
/   \
3     5
\    / 
2  0   
\
1

Note:

The size of the given array will be in the range [1,1000].

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
		TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
			return  method1(nums); 
		}
		TreeNode *method1(vector<int> & nums)
		{
			if(!nums.size()) return NULL;
			return buildtree(nums,0,nums.size()-1);
		}
		TreeNode *method2(vector<int> & nums)
		{
			vector<TreeNode *> stk;
			for(int i=0;i<nums.size();++i)
			{
				TreeNode *cur=new TreeNode(nums[i]);
				while(!stk.empty()&&stk.back()->val<nums[i])
				{
					cur->left=stk.back();
					stk.pop_back();
				}
				if(!stk.empty())
				stk.back()->right=cur;
				stk.push_back(cur);
			}
			return stk.front();
		}
		TreeNode *buildtree(vector<int> & nums,int begin,int end)
		{
			if(begin>end) return NULL;
			int index=begin;
			for(int i=begin+1;i<=end;++i)
				if(nums[i]>nums[index])
					index=i;
			TreeNode *root=new TreeNode(nums[index]);
			root->left=buildtree(nums,begin,index-1);
			root->right=buildtree(nums,index+1,end);
			return root;
		}
};
