/*
Given a positive integer K, you need find the smallest positive integer N such that N is divisible by K, and N only contains the digit 1.

Return the length of N.  If there is no such N, return -1.

 

Example 1:

Input: 1
Output: 1
Explanation: The smallest answer is N = 1, which has length 1.

Example 2:

Input: 2
Output: -1
Explanation: There is no such positive integer N divisible by 2.

Example 3:

Input: 3
Output: 3
Explanation: The smallest answer is N = 111, which has length 3.

 

Note:

    1 <= K <= 10^5
*/

#include"head.h"

class Solution {
public:
    int smallestRepunitDivByK(int K) {
	if(K==2||K==5)
		return -1;
	int N=1,r=0;
	for(;N<=K;N++)
	{
		r=(r*10+1)%K;	
		if(!r) return N;
	}        
	return -1;
    }
};
