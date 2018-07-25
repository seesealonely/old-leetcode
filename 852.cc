/*
*/

#include"852.h"

int main()
{
	vector<int> v;
	v.push_back(0);	v.push_back(1);	v.push_back(0);
	Solution s;
	cout<<s.peakIndexInMountainArray(v)<<endl;
	v.clear();
	v.push_back(0);v.push_back(2);v.push_back(1);v.push_back(0);
	cout<<s.peakIndexInMountainArray(v)<<endl;
	return 0;
}
