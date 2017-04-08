#include"532.h"
int main()
{
	int vv[]={1, 2, 3, 4, 5};
	vector<int> v(vv,vv+5);
	int vv1[]={1, 3, 1, 5, 4};
	vector<int> v1(vv1,vv1+5);
	Solution s;
	cout<<s.findPairs(v,1)<<endl;
	cout<<s.findPairs(v1,0)<<endl;
	return 0;
}
