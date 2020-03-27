/*
You are given two integer arrays nums1 and nums2 sorted in ascending order and an integer k.

Define a pair (u,v) which consists of one element from the first array and one element from the second array.

Find the k pairs (u1,v1),(u2,v2) ...(uk,vk) with the smallest sums.

Example 1:

Input: nums1 = [1,7,11], nums2 = [2,4,6], k = 3
Output: [[1,2],[1,4],[1,6]] 
Explanation: The first 3 pairs are returned from the sequence: 
             [1,2],[1,4],[1,6],[7,2],[7,4],[11,2],[7,6],[11,4],[11,6]

Example 2:

Input: nums1 = [1,1,2], nums2 = [1,2,3], k = 2
Output: [1,1],[1,1]
Explanation: The first 2 pairs are returned from the sequence: 
             [1,1],[1,1],[1,2],[2,1],[1,2],[2,2],[1,3],[1,3],[2,3]

Example 3:

Input: nums1 = [1,2], nums2 = [3], k = 3
Output: [1,3],[2,3]
Explanation: All possible pairs are returned from the sequence: [1,3],[2,3]

*/

#define c11
#include"head.h"

class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
	priority_queue<p,vector<p>,cmp> pq;        
	int m=nums1.size(),n=nums2.size();
	vector<vector<int> > res;
	if(!m||!n) return res;	
	for(int i=0;i<n;i++)
		pq.push({0,i,nums1[0]+nums2[i]});
	for(int i=0;i<min(k,m*n);i++)
	{
		p cur=pq.top();pq.pop();
		res.push_back({nums1[cur.x],nums2[cur.y]});
		if(cur.x==m-1) continue;
		pq.push({cur.x+1,cur.y,nums1[cur.x+1]+nums2[cur.y]});
	}
	return res;
    }
	class p
	{
		public:
		int x;
		int y;
		int val;
		p(int x,int y,int val)
		{
		this->x=x;
		this->y=y;
		this->val=val;
		}	
	};
	class cmp
	{
		public:
	bool operator ()(p t1,p t2)
	{
	return t1.val-t2.val>0;
	}
	};
};
