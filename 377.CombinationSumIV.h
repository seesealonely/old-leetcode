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
int firstWay(vector<int> &nums,int target)
{
	if(target==0) return 1;
	int res=0;
	for(int i=0;i<nums.size();i++)
		if(target>=nums[i])
			res+=firstWay(nums,target-nums[i]);
	return res;
}
int origindp(vector<int> & nums,int target)
{
int len=nums.size();
	vector<vector<int> > dp(len+1,vector<int> (target+1,0));

	for(int i=0;i<nums.size()+1;i++)
		dp[i][0]=1;
	for(int i=1;i<nums.size()+1;i++)
		for(int j=1;j<target+1;j++)
			if(i-nums[j]>=dp[i][j])
				dp[i][j]+=dp[i][i-nums[j]];		
	return dp[nums.size()][target];
}
class Solution {
	public:
		int combinationSum4(vector<int>& nums, int target) {
			return  origindp(nums,target); 
		}
};
