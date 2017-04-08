#include<iostream>
using namespace std;
class Solution {
	public:
		void rotate(vector<int>& nums, int k) {
			for(int i=0,temp=0;i<nums.size();i++)
			{
				temp=nums[i];
				nums[i]=nums[nums.size()-k+i-1];
				nums[nums.size()-k+i-1]=temp;
			} 
		}
};
