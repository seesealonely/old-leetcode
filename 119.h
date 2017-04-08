#include<iostream>
#include<vector>
using namespace std;
class Solution
{
	public:
		vector<int> generate(int numRows)
		{
			vector<int> res(numRows); 
			for(int i=0;i<numRows;i++)
			{
				res[0]=res[i]=1;
				for(int j=1;j<i;j++)
					res[j]=res[j-1]+res[j];
			}	
			return res;
		}
};
