#include"83.h"
int main()
{
	
	ListNode *head=buildList();
	show(head);
	Solution s;
	show(s.deleteDuplicates(head));
	return 0;
}
