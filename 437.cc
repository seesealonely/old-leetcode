#include"437.h"
int main()
{
	Solution s;
	TreeNode *r=s.buildTree();
	cout<<s.pathSum(r,8)<<endl;	
	return 0;
}
