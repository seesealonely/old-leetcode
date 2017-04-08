#include<iostream>
#include<vector>
using namespace std;
                                                                                 class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int> >& obstacleGrid) {
        	int rows=obstacleGrid.size();
		int cols=obstacleGrid[0].size();
		vector<vector<int> >  dp(rows+1,vector<int>(cols+1,0));
		dp[0][1]=1;
		for(int i=1;i<rows+1;++i)
		for(int j=1;j<cols+1;++j)
				if(!obstacleGrid[i-1][j-1])
				dp[i][j]=dp[i-1][j]+dp[i][j-1];
		return dp[rows][cols];
    }
};
