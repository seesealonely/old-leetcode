#include<iostream>
using namespace std;
/**
  Definition for singly-linked list.
  */
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
struct ListNode *buildList(void)
{
	struct ListNode *head=NULL,*next=NULL;
	bool nohead=true;
	int inputnumber=0;
	cout<<"exit build buildList after input number more than 9"<<endl;
	do{
		cin>>inputnumber;
		if(inputnumber>9)
			break;
		if(nohead)
		{
			head=next=new struct ListNode(inputnumber);
			nohead=false;
		}
		else
		{
			next->next=new struct ListNode(inputnumber);
			next=next->next;	
			next->val=inputnumber;
		}
	}while(nohead||inputnumber<=9);
	return head;
}
void show(struct ListNode *head)
{
	int i=0;

	if(head)
	{
		cout<<"################"<<endl;
		for(struct ListNode *next=head;next;)
		{
			cout<<"Th"<<i<<" "<<next->val<<endl;
			next=next->next;
			i++;
		}
		cout<<"################"<<endl<<endl;;
	}
	//	else exit(0);
}
class Solution {
	public:
		ListNode* reverseBetween(ListNode* head, int m, int n) {
			ListNode newhead(0);
			newhead.next=head;
			ListNode *pre=&newhead,*cur=head,*nextp;
			for(int i=0;i<m-1;i++)
				pre=pre->next;
			cur=pre->next;
			for(int i=0;i<n-m;i++)
			{
				nextp=cur->next;
				cur->next=nextp->next;
				nextp->next=pre->next;
				pre->next=nextp;
			}
			return newhead.next;
		}
};
