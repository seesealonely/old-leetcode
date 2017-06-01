/*
Given an integer array nums, find the sum of the elements between indices i and j (i ≤ j), inclusive.
The update(i, val) function modifies nums by updating the element at index i to val.

Example:

Given nums = [1, 3, 5]

sumRange(0, 2) -> 9
update(1, 2)
sumRange(0, 2) -> 8

Note:

    The array is only modifiable by the update function.
    You may assume the number of calls to update and sumRange function is distributed evenly.

*/

#include"head.h"

class NumArray {
public:
    NumArray(vector<int> nums):res(nums) {
    }
    
    void update(int i, int val) {
       res[i]=val; 
    }
    
    int sumRange(int i, int j) {
       int r=0;
	for(int i=0;i<=j;++i) r+=res[i]; 
	return r;
    }
private: vector<int> res;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * obj.update(i,val);
 * int param_2 = obj.sumRange(i,j);
 */
