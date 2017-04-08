#include"98.h"
int main()
{
	Solution s;
	TreeNode *root=s.buildTree();
	cout<<s.isValidBST(root)<<endl;
	return 0;
}
