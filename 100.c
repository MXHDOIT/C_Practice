struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	struct ListNode* l3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	l3->val = 0;
	struct ListNode* tail = l3;
	int flag = 0;
	int sum = 0;
	struct ListNode* p1 = l1;
	struct ListNode* p2 = l2;
	while (p1 && p2)
	{
		sum = p1->val + p2->val + flag;

		flag = sum / 10;
		sum = sum % 10;

		tail->next = (struct ListNode*)malloc(sizeof(struct ListNode));
		tail = tail->next;
		tail->val = sum;
		tail->next = NULL;

		p1 = p1->next;
		p2 = p2->next;
	}

	while (p1)
	{
		sum = p1->val + flag;
		flag = sum / 10;
		sum = sum % 10;
		tail->next = (struct ListNode*)malloc(sizeof(struct ListNode));
		tail = tail->next;
		tail->val = sum;
		tail->next = NULL;
		p1 = p1->next;
	}

	while (p2)
	{
		sum = p2->val + flag;
		flag = sum / 10;
		sum = sum % 10;
		tail->next = (struct ListNode*)malloc(sizeof(struct ListNode));
		tail = tail->next;
		tail->val = sum;
		tail->next = NULL;
		p2 = p2->next;
	}


	
	return l3;
}

//力扣：第二题给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。

//如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
//
//您可以假设除了数字 0 之外，这两个数都不会以 0 开头。


//只实现函数
#include<stdio.h>
#include<stdlib.h>
struct ListNode {
	int val;
	struct ListNode* next;
	
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	//先创建一个带头节点的新指针，方便操作后边删除头结点
	struct ListNode* L3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	L3->next = NULL;
	//用两个指针分别指向两个单链表中当前所指元素
	struct ListNode* p1 = l1;
	struct ListNode* p2 = l2;

	//用来指向新节点的尾节点，以便于插入
	struct ListNode* tail = L3;
	int sum = 0;
	int flag = 0; //标志位

	
	while (p1 && p2)
	{
		sum = p1->val + p2->val + flag;

		flag = sum / 10;
		sum = sum % 10;
		tail->next = (struct ListNode*)malloc(sizeof(struct ListNode));

		tail = tail->next;
		tail->val = sum;
		tail->next = NULL;

		p1 = p1->next;
		p2 = p2->next;
	}

	while (p1 != NULL)  //当p1未运算完时
	{
		sum = p1->val + flag;
		flag = sum / 10;
		sum = sum % 10;
		tail->next = (struct ListNode*)malloc(sizeof(struct ListNode));

		tail = tail->next;
		tail->val = sum;
		tail->next = NULL;

		p1 = p1->next;
	}

	while (p2 != NULL)
	{
		sum = p2->val + flag;
		flag = sum / 10;
		sum = sum % 10;
		tail->next = (struct ListNode*)malloc(sizeof(struct ListNode));

		tail = tail->next;
		tail->val = sum;
		tail->next = NULL;

		p2 = p2->next;
	}


	//如果标志位换位1时

	if (flag == 1)
	{
		tail->next = (struct ListNode*)malloc(sizeof(struct ListNode));

		tail = tail->next;
		tail->val = 1;
		tail->next = NULL;
	}

	//删除头结点
	L3 = L3->next;

	return L3;
}