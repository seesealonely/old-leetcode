/*
In an infinite binary tree where every node has two children, the nodes are labelled in row order.

In the odd numbered rows (ie., the first, third, fifth,...), the labelling is left to right, while in the even numbered rows (second, fourth, sixth,...), the labelling is right to left.

Given the label of a node in this tree, return the labels in the path from the root of the tree to the node with that label.

 

Example 1:

Input: label = 14
Output: [1,3,4,14]

Example 2:

Input: label = 26
Output: [1,2,6,10,26]

 

Constraints:

    1 <= label <= 10^6

*/

#include"head.h"

class Solution {
public:
    vector<int> pathInZigZagTree(int label) {
	int level=1,i=1;
	while((i<<1)<=label) {level++;i<<=1;}
	vector<int> res(level);
	if(label<1) return res;
	for(;label>=1;level--)
	{
		res[level-1]=label;
		label=(1<<(level-1)) + (1<<level)-1-label;
		label/=2;
	}        
	return res;
    }
};
