#include<iostream>
using namespace std;
/**
 * Definition for singly-linked list.
 */
 struct ListNode {
 int val;
 ListNode *next;
 ListNode(int x) : val(x), next(NULL) {}
 };
class Solution {
public:
    bool hasCycle(ListNode *head) {
	if(!head)return false;
	ListNode *fast,*slow;
	fast=slow=head;
	while(fast->next&&fast->next->next)
	{
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow)
			return true;
	}        
	return false;
    }
};
