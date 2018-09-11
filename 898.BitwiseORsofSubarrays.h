/*
   We have an array A of non-negative integers.

   For every (contiguous) subarray B = [A[i], A[i+1], ..., A[j]] (with i <= j), we take the bitwise OR of all the elements in B, obtaining a result A[i] | A[i+1] | ... | A[j].

   Return the number of possible results.  (Results that occur more than once are only counted once in the final answer.)



   Example 1:

Input: [0]
Output: 1
Explanation: 
There is only one possible result: 0.

Example 2:

Input: [1,1,2]
Output: 3
Explanation: 
The possible subarrays are [1], [1], [2], [1, 1], [1, 2], [1, 1, 2].
These yield the results 1, 1, 2, 1, 3, 3.
There are 3 unique values, so the answer is 3.

Example 3:

Input: [1,2,4]
Output: 6
Explanation: 
The possible results are 1, 2, 3, 4, 6, and 7.



Note:

1 <= A.length <= 50000
0 <= A[i] <= 10^9

*/

#include"head.h"

class Solution {
	public:
		int subarrayBitwiseORs(vector<int>& A) {
			return dp(A);
		}
		int dp(vector<int>& A) {
			if(A.empty()) return 0;
			int res=1;
			vector<int> subOR,dp(A.size(),0);
			sort(A.begin(),A.end());
			subOR.push_back(A[0]);
			for(int i=1;i<A.size();i++)
			{
				if((subOR.back()|A[i])!=A[i])
				{
				subOR.push_back(A[i]);
				res+=subOR.size();
				}
			}
		return res;
		}
};
