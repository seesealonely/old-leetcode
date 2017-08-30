/*
 Given a sequence of n integers a1, a2, ..., an, a 132 pattern is a subsequence ai, aj, ak such that i < j < k and ai < ak < aj. Design an algorithm that takes a list of n numbers as input and checks whether there is a 132 pattern in the list.

Note: n will be less than 15,000.

Example 1:

Input: [1, 2, 3, 4]

Output: False

Explanation: There is no 132 pattern in the sequence.

Example 2:

Input: [3, 1, 4, 2]

Output: True

Explanation: There is a 132 pattern in the sequence: [1, 4, 2].

Example 3:

Input: [-1, 3, 2, 0]

Output: True

Explanation: There are three 132 patterns in the sequence: [-1, 3, 2], [-1, 3, 0] and [-1, 2, 0].

*/
#include"head.h"

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
	if(nums.size()<3) return false;
 	int min=INT_MAX,max=INT_MIN,i;
	for(i=0;i<nums.size();++i)
	{
		if(nums[i]<min) min=nums[i];
		if(nums[i]>max) max=nums[i];
		if(min!=max&&nums[i]>min&&nums[i]<max){cout<<min<<" "<<nums[i]<<" "<<max<<endl; return true;}
	}       cout<<min<<" "<<nums[i]<<" "<<max<<endl;
	return false;
    }
};