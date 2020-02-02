/*
Given an integer array sorted in non-decreasing order, there is exactly one integer in the array that occurs more than 25% of the time.

Return that integer.

 

Example 1:

Input: arr = [1,2,2,6,6,6,6,7,10]
Output: 6

 

Constraints:

    1 <= arr.length <= 10^4
    0 <= arr[i] <= 10^5

*/

#include"head.h"

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
	return firstWay(arr);
    }
	int firstWay(vector<int> &arr)
	{
		int len=arr.size(),step=len/4;
		for(int i=0;i<len-step;i++)
		{
			if(arr[i]==arr[i+step])
				return arr[i];
		}
		return -1;
	}
};
