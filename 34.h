#include<iostream>
#include<vector>
using namespace std;
class Solution {
	public:
		vector<int> searchRange(vector<int>& nums, int target)
		{
			int begin=0,end=nums.size()-1,mid,l,r;
			vector<int> res;
			while(begin<end)       
			{
				mid=(begin+end)>>1;
				if(nums[mid]>=target)
					end=mid;
				else if(nums[mid]<target)
					begin=mid+1;
			}
			l=begin;
			end=nums.size()-1;
			while(begin<end)
			{
				mid=(begin+end)>>1;
				if(nums[mid]>target)
					end=mid;
				else if(nums[mid]<=target)
					begin=mid+1;
			}
			r=begin;
			if(l==r)
			{	
			if(nums.empty()) {res.push_back(-1);res.push_back(-1);return res;}
			if(nums[l]==target) 
			{
				res.push_back(l);
				res.push_back(r);
				return res;
			}
			{res.push_back(-1);res.push_back(-1);return res;}
			}
			else 
			{res.push_back(l);res.push_back(r-1);return res;}
		}
};
