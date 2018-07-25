/*
*/

#include"head.h"

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
	int peak=INT_MIN,res=0;
	for(int i=0;i<A.size();i++)
	if(A[i]>peak) {peak=A[i];res=i;}
	return res;
    }
};
