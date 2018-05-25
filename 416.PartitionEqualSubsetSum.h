/*
Given a non-empty array containing only positive integers, find if the array can be partitioned into two subsets such that the sum of elements in both subsets is equal.

Note:

    Each of the array element will not exceed 100.
    The array size will not exceed 200.

Example 1:

Input: [1, 5, 11, 5]

Output: true

Explanation: The array can be partitioned as [1, 5, 5] and [11].

Example 2:

Input: [1, 2, 3, 5]

Output: false

Explanation: The array cannot be partitioned into equal sum subsets.

*/

#include"head.h"

bool firstWay(vector<int>  & nums)
{
	int sum=0,len=nums.size();
	for(int i=0;i<nums.size();i++)
	sum+=nums[i];
	if(sum%2) return false;
	vector<vector<bool > > dp(len+1,vector<bool>(sum+1,false));
	for(int i=0;i<=len;i++)
	dp[i][0]=true;
	for(int i=1;i<=len;i++)
	for(int j=1;j<=sum;j++)
	{
		dp[i][j]=dp[i-1][j];
		if(j>=nums[i-1])
		{
			dp[i][j]=dp[i][j]||dp[i-1][j-nums[i-1]];		
		}	
	}
	return dp[len][sum];
}
class Solution {
public:
    bool canPartition(vector<int>& nums) {
	return firstWay(nums);        
    }
};
