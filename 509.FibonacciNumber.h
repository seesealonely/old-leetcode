/*
The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0,   F(1) = 1
F(N) = F(N - 1) + F(N - 2), for N > 1.

Given N, calculate F(N).

 

Example 1:

Input: 2
Output: 1
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.

Example 2:

Input: 3
Output: 2
Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.

Example 3:

Input: 4
Output: 3
Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.
*/

#include"head.h"

class Solution {
public:
    int fib(int N) {
	return fmO(N);
	return fm(N);
	return f(N);
    }
	int f(int N)
	{
		if(N<2) return N;
		return f(N-1)+f(N-2);
	}
	int fm(int N)
	{
		if(N<2) return N;
		vector<int> dp(N+1,0);
		dp[1]=1;
		for(int i=2;i<=N;i++)
			dp[i]=dp[i-1]+dp[i-2];
		return dp[N];
	}
	int fmO(int N)
	{
		if(N<2) return N;
		int n0=0,n1=1,n=1;
		for(int i=2;i<=N;i++)
		{
			n=n0+n1;
			n0=n1;
			n1=n;
		}
		return n;
	}
};
