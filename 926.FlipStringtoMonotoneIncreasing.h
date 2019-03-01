/*
   A string of '0's and '1's is monotone increasing if it consists of some number of '0's (possibly 0), followed by some number of '1's (also possibly 0.)

   We are given a string S of '0's and '1's, and we may flip any '0' to a '1' or a '1' to a '0'.

   Return the minimum number of flips to make S monotone increasing.



   Example 1:

Input: "00110"
Output: 1
Explanation: We flip the last digit to get 00111.

Example 2:

Input: "010110"
Output: 2
Explanation: We flip to get 011111, or alternatively 000111.

Example 3:

Input: "00011000"
Output: 2
Explanation: We flip to get 00000000.



Note:

1 <= S.length <= 20000
S only consists of '0' and '1' characters.


*/

#include"head.h"

class Solution {
	public:
		int minFlipsMonoIncr(string S) 
		{
		return 	optDp(S);
		return 	dp(S);
		}
/*
		int firstWay(string S)
		{
			int res=INT_MAX,len=S.size();
			vector<int> pre(len+1,0);       
			for(int i=0;i<len;i++)
				pre[i+1]=pre[i]+(S[i]=='1'?1:0);
			for(int i=0;i<=len;i++)
				res=min(res,pre[i]+len-i-(pre[len]-pre[i]));	
			return res;
		}
*/
		int dp(string S)
		{
			vector<vector<int> > dp(S.size()+1,vector<int>(2,0));
			for(int i=1;i<=S.size();i++)
			{
				if(S[i-1]=='0')
				{
					dp[i][0]=dp[i-1][0];
					dp[i][1]=min(dp[i-1][1],dp[i-1][0])+1;
				}
				else
				{
					dp[i][0]=dp[i-1][0]+1;
					dp[i][1]=min(dp[i-1][0],dp[i-1][1]);
				}
			}
			return min(dp[S.size()][0],dp[S.size()][1]);
		}
		int optDp(string S)
		{
			int endZero=0,endOne=0;
			for(int i=1;i<=S.size();i++)
			{
				if(S[i-1]=='0')
				{
					endZero=endZero;
					endOne=min(endZero,endOne)+1;
				}
				else
				{
					endOne=min(endZero,endOne);
					endZero=endZero+1;
				}
			}
			return min(endZero,endOne);
		}
};
