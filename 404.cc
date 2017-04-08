#include"404.h"
int main()
{
	
	Solution s;
	TreeNode *r=s.buildTree();
	cout<<s.sumOfLeftLeaves(r)<<endl;
	return 0;
}
