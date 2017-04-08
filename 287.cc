#include"287.h"
int main()
{
	int v1[]={1,2,3,4,5,6,7,5};
	vector<int> vv1(v1,v1+8);
	int v2[]={1,2,3,3};
	vector<int> vv2(v2,v2+4);
	Solution s;
	cout<<s.missingNumber(vv1)<<endl;
	cout<<s.missingNumber(vv2)<<endl;
	return 0;
}
