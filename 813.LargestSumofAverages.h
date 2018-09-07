/*
We partition a row of numbers A into at most K adjacent (non-empty) groups, then our score is the sum of the average of each group. What is the largest score we can achieve?

Note that our partition must use every number in A, and that scores are not necessarily integers.

Example:
Input: 
A = [9,1,2,3,9]
K = 3
Output: 20
Explanation: 
The best choice is to partition A into [9], [1, 2, 3], [9]. The answer is 9 + (1 + 2 + 3) / 3 + 9 = 20.
We could have also partitioned A into [9, 1], [2], [3, 9], for example.
That partition would lead to a score of 5 + 2 + 6 = 13, which is worse.

 

Note:

    1 <= A.length <= 100.
    1 <= A[i] <= 10000.
    1 <= K <= A.length.
    Answers within 10^-6 of the correct answer will be accepted as correct.

*/

#include"head.h"

class Solution {
public:
    double largestSumOfAverages(vector<int>& A, int K) {
	return dp(A,K);        
    }
    double dp(vector<int>& A, int K) {
	vector<vector<int> > dp(A.size(),vector<int>(A.size(),0));
	vector<int> subsum(A.size()+1,0);
	for(int i=0;i<A.size();i++)
	subsum[i+1]=subsum[i]+A[i];
	for(int k=1;k<=K;k++)
	for(int i=1;i+K-k<A.size();i++)
	for(int j=i-1;j>=0;j--)
		if(k==1)
			dp[k-1][i]=(subsum[i]-subsum[j])/i-j;
		else
		dp[k-1][i]=max(dp[k-1][i]+(subsum[i]-subsum[j])/i-j,dp[k-1][j]);			
	return dp[K-1][A.size()-1];
	}
};
