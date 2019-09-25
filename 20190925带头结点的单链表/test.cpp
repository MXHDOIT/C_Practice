#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define ERROR 0
typedef  int Status;

typedef struct Lnode
{
	int data;
	struct Lnode* next;
}LNode, * LinkList;
//�������� �� LinkList L;
//����ڵ�ָ��p : Lnode * p; <==>  LinkList p;


//��ʼ��������
Status InitList_L(LinkList & L)
{
	L = new LNode;    //L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;

	return OK;
}

//�ж��Ƿ�Ϊ��
Status ListEmpty(LinkList L)
{
	if (L->next == NULL)
		return OK;
	else
		return ERROR;
}


//�����������
Status DestroyList_L(LinkList &L)
{
	LNode* p;
	while (L != NULL)
	{
		p = L;
		L = L->next;
		delete p;
	}

	return OK;
}


//��յ�����
Status ClearList_L(LinkList L)
{
	LNode* p;
	while (L->next != NULL)
	{
		p = L->next;     
		L->next = p->next;
		delete p ;
	}

	return OK;
}


//�������2(��ʦ����)
Status ClearList_L2(LinkList L)
{
	LNode* p, * q;
	p = L->next;
	while (p)
	{
		q = p->next;
		delete p;
		p = q;
	}
	L->next = NULL;
	return OK;
}

//������ı�
int ListLength_L(LinkList L)
{
	LNode* p;
	p = L->next;
	int count = 0;
	while (p)
	{
		count++;
		p = p->next;
	}

	return count;
 }


//ȡ�������е�i��Ԫ�ص�����
Status GetElem_L(LinkList L,int k,int &e)
{
	LNode* p;
	p = L->next;
	if (k < 1 || k > ListLength_L(L))
		return ERROR;
	while (k - 1)
	{
		p = p->next;
	}

	e = p->data;
	return OK;
}


//��ֵ����   O(n)
LNode *LocateElem_L(LinkList L,int e)
{
	LNode * p;
	p = L->next;
	//int i = 1;
	while (p)
	{
		if (p->data == e)
		{
			return p;
			//return i;
		}
		//i++;
		p = p->next;
	}
	return NULL;
	//return 0;
}

//����ڵ㣺�ڵ�i���ڵ�ǰ����ֵΪe���½ڵ�  O(1)
Status ListInsert_L(LinkList &L,int i,int e)
{
	LNode* p = L;
	int j = 0;
	LNode* s = new LNode;
	s->data = e;
	while (p && j < i - 1)
	{
		p = p->next;
		++j;
	}

	if (!p || j > i - 1)
		return ERROR;
	s->next = p->next;
	p->next = s;
	return OK;
}

//ɾ���ڵ�    O(1)
Status ListDelete_L(LinkList &L,int i,int &e)
{
	LNode* p = L;
	LNode* q;
	int j = 0;
	
	while (p&& j < i - 1)
	{
		p = p->next;
		++j;
	}

	if (!p || j > i - 1)
		return ERROR;
	q = p->next; 
	if (q)
	{
		e = q->data;
		p->next = q->next;
		delete  q;
		return OK;
	}
	return ERROR;
}


//������Ľ�����ͷ�巨    O(n)
void CreateList_H(LinkList &L,int n)
{
	L = new LNode;
	L->next = NULL;
	while (n--)
	{
		LNode* p = new LNode;
		scanf("%d", &p->data);

		p->next = L->next;
		L->next = p;
	}
}


//������Ľ�����β�巨  O(n)
void CreateList_T(LinkList& L, int n)
{
	L = new LNode;
	L->next = NULL;
	LNode* tail = L;

	while (n--)
	{
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		LNode* p = new LNode;
		scanf("%d", &p->data);
		p->next = NULL;
		tail->next = p;
	}
	
}
int main()
{
	LinkList L;

	return 0;
}
#if 0
int main()
{
	

	int a[5] = { 1, 2, 3, 4, 5 };

	int* p1 = (int*)(&a + 1);
	int* p2 = (int*)((int)a + 1);
	int* p3 = (int*)(a + 1);
	printf("%d, %x, %d\n", p1[-1], p2[0], p3[1]);
	return 0;
	return 0;
}
#endif

