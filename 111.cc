#include"111.h"
int main()
{
	Solution s;
	TreeNode *root=s.buildTree();
	cout<<	s.minDepth(root)<<endl;
	return 0;
}
