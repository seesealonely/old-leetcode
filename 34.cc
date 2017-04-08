#include"34.h"
int  main()
{
	int vv[]={2,2};//{5,7,7,8,8,10};{8,8,8,8,8,8,8,8};
	vector<int> v(vv,vv+2);
	Solution s;
	vector<int> res=s.searchRange(v,2);
	cout<<res[0]<<" "<<res[1]<<endl;
	return 0;
}
