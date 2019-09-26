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
//定义链表 ： LinkList L;
//定义节点指针p : Lnode * p; <==>  LinkList p;


//初始化单链表
Status InitList_L(LinkList & L)
{
	L = new LNode;    //L = (LinkList)malloc(sizeof(LNode));
	L->next = NULL;

	return OK;
}

//判断是否为空
Status ListEmpty(LinkList L)
{
	if (L->next == NULL)
		return OK;
	else
		return ERROR;
}


//单链表的销毁
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


//清空单链表
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


//清空链表2(老师讲解)
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

//求单链表的表长
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


//取单链表中第i个元素的内容
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


//按值查找   O(n)
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

//插入节点：在第i个节点前插入值为e的新节点  O(1)
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

//删除节点    O(1)
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


//单链表的建立：头插法    O(n)
void CreateList_H(LinkList &L,int n)
{
	L = new LNode;
	L->next = NULL;
	while (n--)
	{
		LNode* p = new LNode;
		scanf_s("%d", &p->data);

		p->next = L->next;
		L->next = p;
	}
}


//单链表的建立：尾插法  O(n)
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
		scanf_s("%d", &p->data);
		p->next = NULL;
		tail->next = p;
	}
	
}


//线性表合并
void Union(LinkList & La, LinkList& Lb)
{
	int lenLa = ListLength_L(La);
	int lenLb = ListLength_L(Lb);
	int i, e;
	for (i = 1; i <= lenLb; i++)
	{
		GetElem_L(Lb, i, e);
		if (!(LocateElem_L(La, e)))
			ListInsert_L(La, ++lenLa, e);
	}
}

//有序表的合并
void MergeList_L(LinkList &La,LinkList &Lb,LinkList &Lc)
{
	LNode* pa, * pb, * pc;
	pa = La->next;
	pb = Lb->next;
	Lc = La;
	pc = Lc;

	while (pa && pb)
	{
		if (pa->data < pb->data)
		{
			pc->next = pa;
			pc = pa;
			pa = pa->next;
		}
		else
		{
			pc->next = pb;
			pc = pb;
			pb = pb->next;
		}
	}

	if (pa)
	{
		pc->next = pa;
	}
	else
	{
		pc->next = pb;
	}
	delete Lb;
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

