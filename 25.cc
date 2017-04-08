#include"25.h"
int main()
{
	Solution s;
	ListNode *head=buildList();
	show(head);
	show(s.reverseKGroup(head,3));
	return 0;
}
