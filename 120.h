#include<iostream>
#include<vector>
using namespace std;
class Solution {
	public:
		int minimumTotal(vector<vector<int> >& triangle) {
			int res=0;
/*
			dfs(triangle,res);       
*/
		return res;
		}
/*
		void dfs(vector<vector<int> > &triangle,int &res)
		{
			for(int i=0;i<triangle.size();i++)
			{
			int tmp=0;
				for(int j=0;j<triangle[i].size()-1;j++)
				tmp=triangle[i][j]<triangle[i][j+1]?triangle[i][j]:triangle[i][j+1];
				res+=tmp;
			}
		}
*/
};
