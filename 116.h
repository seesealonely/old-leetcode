#include<iostream>
using namespace std;
/**
  Definition for binary tree with next pointer.
  */
struct TreeLinkNode {
	int val;
	TreeLinkNode *left, *right, *next;
	TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};
/*
class Solution {
	public:
		void connect(TreeLinkNode *root) {
			queue<TreeNode *>  qu;
			TreeNode *tmp;
			qu.push_back(root);
			while(!qu.empty())
			{
				tmp=qu.front();
				qu.pop();
				while(!qu.empty())
				{
				tmp->next=qu.front();
				qu.push_back(qu.front()->left);
				qu.push_back(qu.front()->right);
				tmp=tmp->next;
				qu.pop();
				}
			}        
		}
};
*/
class Solution {
	public:
		void connect(TreeLinkNode *root) {
			TreeLinkNode *tmp=root
			while(tmp)
			{
				
			}        
		}
};
