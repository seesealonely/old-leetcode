/*
Given s1, s2, s3, find whether s3 is formed by the interleaving of s1 and s2.

Example 1:

Input: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac"
Output: true

Example 2:

Input: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbbaccc"
Output: false

*/

#include"head.h"

class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
 	return dp(s1,s2,s3);       
    }
    bool dp(string s1, string s2, string s3) {
	if(s1.size()+s2.size()!=s3.size())
		return false;
	vector<vector<bool> > dp(s1.size()+1,vector<bool>(s2.size()+1,false));
	for(int i=0;i<=s1.size();i++)
	for(int j=0;j<=s2.size();j++)
	{
		if(i==0&&j==0)
		dp[i][j]=true;
		else if(i==0)
			dp[i][j]=dp[i][j-1]&&(s2[j-1]==s3[i+j-1]);
		else if(j==0)
			dp[i][j]=dp[i-1][j]&&(s1[i-1]==s3[i+j-1]);
		else
		{
			dp[i][j]=(dp[i-1][j]&&(s1[i-1]==s3[i+j-1]))||(dp[i][j-1]&&(s2[j-1]==s3[i+j-1]));
		}
	}
	return dp[s1.size()][s2.size()];
    }
};
