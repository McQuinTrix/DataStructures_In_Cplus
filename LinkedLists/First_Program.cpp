#include <iostream>
#include <string>

struct ListNode {
	int data;
	struct ListNode * next;
	};
	

int main(){
	struct ListNode *p = (struct ListNode *)malloc(sizeof(struct ListNode));
	p->data = 10;
	struct ListNode *q = (struct ListNode *)malloc(sizeof(struct ListNode));
	p->next = q;
	q->data = 20;
	struct ListNode *head = p;
	std::cout << head->next;
}
