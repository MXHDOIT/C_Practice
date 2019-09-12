#pragma once



#include"list.h"

void InitList(Plist plist)
{
	if (plist == NULL)
	{
		return;
	}

	plist->next = NULL;
}

Node* GetNode(int val)
{
	Node* p = (Node*)malloc(sizeof(Node));
	if (p != NULL)
	{
		p->data = val;
		p->next = NULL;
	}
	

	return p;
}


void InsertHead(Plist plist, int val)
{
	//Node* p = (Node*)malloc(sizeof(Node*));
	Node* p = GetNode(val);

	p->next = plist->next;
	plist->next = p;
}

void InsertEnd(Plist plist, int val)
{
	Node* p = GetNode(val);
	Node* pcur = plist;
	while(pcur->next != NULL)
	{
		pcur = pcur->next;
	}

	//p->next = pcur->next; 多此一举
	pcur->next = p;  

	/*Node* p = GetNode(val);  方法2

	while (plist->next != NULL)
	{
		plist = plist->next;
	}
	plist->next = p;*/
}

int GetLen(Plist plist)
{
	Node* pcur = plist->next;
	int count = 0;
	while (pcur != NULL)
	{
		count++;
		pcur = pcur->next;
	}
	return count;
}

void Show(Plist plist)
{
	Node* pcur = plist -> next;
	while (pcur!=NULL)
	{
		printf("%d\n", pcur->data);
		pcur = pcur->next;
	}
}