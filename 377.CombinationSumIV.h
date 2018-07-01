/*
   Given an integer array with all positive numbers and no duplicates, find the number of possible combinations that add up to a positive integer target.

Example:

nums = [1, 2, 3]
target = 4

The possible combination ways are:
(1, 1, 1, 1)
(1, 1, 2)
(1, 2, 1)
(1, 3)
(2, 1, 1)
(2, 2)
(3, 1)

Note that different sequences are counted as different combinations.

Therefore the output is 7.

Follow up:
What if negative numbers are allowed in the given array?
How does it change the problem?
What limitation we need to add to the question to allow negative numbers? 
*/

#include"head.h"
int dfs(vector<int> &nums,int target)
{
	if(!target)
	return 1;
	int	res=0;	
	for(int i=0;i<nums.size();i++)
	if(target-nums[i]>=0)
	res+=dfs(nums,target-nums[i]);
	return res;
}
int recursivedp(vector<int> &nums,int target,vector<int> &dp)
{
	if(dp[target]!=-1)
	return dp[target];
	int res=0;
	for(int i=0;i<nums.size();i++)
		if(target-nums[i]>=0)
		res+=recursivedp(nums,target-nums[i],dp);
	dp[target]=res;
	return res;
}
int dp(vector<int> & nums,int target)
{
	vector<int>  dp(target+1,0);
	dp[0]=1;
	for(int i=1;i<target+1;i++)
	for(int j=0;j<nums.size();j++)
	{
			if(i-nums[j]>=0)
			dp[i]+=dp[i-nums[j]];
	}
	return dp[target];
}
class Solution {
	public:
		int combinationSum4(vector<int>& nums, int target) {
//			return  dfs(nums,target); 
/*
			vector<int> dp(target+1,-1);
			dp[0]=1;
			return  recursivedp(nums,target,dp); 
*/
			return  dp(nums,target); 
		}
};
