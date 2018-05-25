/*
Given two words word1 and word2, find the minimum number of operations required to convert word1 to word2.

You have the following 3 operations permitted on a word:

    Insert a character
    Delete a character
    Replace a character

Example 1:

Input: word1 = "horse", word2 = "ros"
Output: 3
Explanation: 
horse -> rorse (replace 'h' with 'r')
rorse -> rose (remove 'r')
rose -> ros (remove 'e')

Example 2:

Input: word1 = "intention", word2 = "execution"
Output: 5
Explanation: 
intention -> inention (remove 't')
inention -> enention (replace 'i' with 'e')
enention -> exention (replace 'n' with 'x')
exention -> exection (replace 'n' with 'c')
exection -> execution (insert 'u')


*/

#include"head.h"
int firstWay(string word1,string word2)
{
	int r=word1.size(),c=word2.size();
	vector<vector<int> > dp(r+1,vector<int> (c+1,0));
	for(int i=1;i<=r;i++) dp[i][0]=i;
	for(int i=1;i<=c;i++) dp[0][i]=i;
	for(int i=1;i<=r;i++)
	for(int j=1;j<=c;j++)
		if(word1[i-1]==word2[j-1])
			dp[i][j]=dp[i-1][j-1];
		else 
		dp[i][j]=min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1])+1;
	return dp[r][c];
}
class Solution {
public:
    int minDistance(string word1, string word2) {
    return    firstWay(word1,word2); 
    }
};
