#include"240.h"
int main()
{
int v1[5][5]={
  {1,   4,  7, 11, 15},
  {2,   5,  8, 12, 19}, 
  {3,   6,  9, 16, 22},
  {10, 13, 14, 17, 24},
  {18, 21, 23, 26, 30}
}; 
	vector<vector<int> > v(&v1[0][0],&v1[4][4]);
/*
  vector<int> v1({1,   4,  7, 11, 15});
  vector<int> v2({2,   5,  8, 12, 19});
  vector<int> v3({3,   6,  9, 16, 22});
  vector<int> v4({10, 13, 14, 17, 24});
  vector<int> v5({18, 21, 23, 26, 30});
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
	v.push_back(v5);
*/
	Solution s;
	cout<<s.searchMatrix(v,12)<<endl;
	return 0;
}
