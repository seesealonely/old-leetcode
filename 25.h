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
		ListNode* reverseKGroup(ListNode* head, int k) {
			ListNode **p=&head,*tmp,*next;
			if(head->next) tmp=head->next;
/*
			while(*p&&((*p)->next)&&k)
			{
				next=*p->next;
				if(next) tmp=next->next;	
				next
				tmp=(*p)->next;
				
				k--;
			}        
*/
		}
};
