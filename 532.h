#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;
class Solution {
	public:
		int findPairs(vector<int>& nums, int k) {
			map<int,int> m;
			map<int,int>::iterator it=m.begin();
			for(int i=0;i<nums.size();i++)
				if(m.find(it->first+nums[i])!=m.end())
					++m[nums[i]];
				else m.insert(map<int,int>::value_type(nums[i],1));
			int count=0;
			if(k)	
				for(int i=0;i<nums.size();i++)
					if(m[nums[i]+k]>0) count+=m[nums[i]+k];	
					else;
			else
				for(int i=0;i<nums.size();i++)
					if(m[nums[i]]>1) 
				{
count+=m[nums[i]]-1;	
	m[nums[i]]=0;
}

			return count;
		}
};
