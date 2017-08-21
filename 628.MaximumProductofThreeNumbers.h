/*
Given an integer array, find three numbers whose product is maximum and output the maximum product.

Example 1:

Input: [1,2,3]
Output: 6

Example 2:

Input: [1,2,3,4]
Output: 24

Note:

    The length of the given array will be in range [3,104] and all elements are in the range [-1000, 1000].
    Multiplication of any three numbers in the input won't exceed the range of 32-bit signed integer.

*/

#include"head.h"

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
	int max1=INT_MIN,max2=INT_MIN,max3=INT_MIN,min1=INT_MAX,min2=INT_MAX;
	for(int i=0;i<nums.size();++i)
	{
		if(i>max1)
		{
			max3=max2;
			max2=max1;
			max1=nums[i];
		}
		else if(i>max2)
		{
			max3=max2;
			max2=nums[i];
		}
		else if(i>max3)
			max3=nums[i];
		if(i<min1)
		{
			min2=min1;
			min1=nums[i];
		}
		else if(i<min2)
			min2=nums[i];
	}        
		return max(max1*max2*max3,max1*min1*min2);
    }
};
