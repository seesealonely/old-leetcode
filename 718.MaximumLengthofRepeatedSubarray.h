/*
Given two integer arrays A and B, return the maximum length of an subarray that appears in both arrays.

Example 1:

Input:
A: [1,2,3,2,1]
B: [3,2,1,4,7]
Output: 3
Explanation: 
The repeated subarray with maximum length is [3, 2, 1].

Note:

    1 <= len(A), len(B) <= 1000
    0 <= A[i], B[i] < 100

*/
#include"head.h"
int firstWay(vector<int> &A,vector<int> & B)
{
	int a=A.size()+1,b=B.size()+1,res=0;
	vector< vector<int > > dp(a,vector<int>(b,0)); 
	for(int i=0;i<a-1;i++)
	for(int j=0;j<b-1;j++)
		if(A[i]==B[j])
		res=max(res,dp[i+1][j+1]=A[i]==B[j]?dp[i][j]+1:0);
	return res;
}
class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
       return firstWay(A,B); 
    }
};
