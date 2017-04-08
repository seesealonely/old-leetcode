#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int> >& matrix, int target) {
 	int maxr=matrix.size(),maxc=matrix[0].size(),r=0,c=maxc-1;
	while(r<maxr&&c>=0)
	{
		if(matrix[r][c]==target) return true;
		else if(matrix[r][c]>target) c--;
		else  r++;
	}       
	return false;
    }
};
