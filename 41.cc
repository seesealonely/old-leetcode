#include"41.h"
int main()
{
	int vv[]={5,4,3,2};
	vector<int> v(vv,vv+4);
	Solution s;
	int res=s.firstMissingPositive(v);
	cout<<res<<endl;
	int vv1[]={-1,4,2,1,9,10};
	vector<int> v1(vv1,vv1+6);
	res=s.firstMissingPositive(v1);
	cout<<res<<endl;
/*
	for(vector<int>::iterator it=res.begin();it!=res.end();++it)
	cout<<*it<<" ";
	cout<<endl;
*/
	return 0;
}
