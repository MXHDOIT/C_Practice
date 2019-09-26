#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct Node
{
	float coef;  //系数
	int  expn;   //指数
	struct Node* next;
}Node,*LinkList;


void InsertTail(LinkList* list, float c, int e)
{
	Node* tail = *list;
	Node* p = (Node*)malloc(sizeof(Node));
	assert(p);
	p->coef = c;
	p->expn = e;
	p->next = NULL;
	if (*list == NULL)
	{
		*list = p;
		return;
	}
	else
	{
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = p;
	}
}

void CreateList(LinkList* list, int n)
{
	float coef;
	int expn;
	int i = 1;
	while (n--)
	{
		printf("请输入第%d数的系数和指数：",i++);
		scanf_s("%f%d", &coef, &expn);
		InsertTail(list, coef,expn);
	}
}


void AddList(LinkList La, LinkList Lb)
{
	assert(La);
	assert(Lb);
	LinkList Lc = La;
	Node* pc = Lc;
	Node* pa = La;
	Node* pb = Lb;

	while (pa&&pb)
	{
		if (pa->expn == pb->expn)
		{
			if (pa->coef + pb->coef == 0)
			{
				pa = pa->next;
				pb = pb->next;
				continue;
			}
			else
			{
				pa->coef = pa->coef + pb->coef;
				if (pc == Lc)
				{
					
					pc = pa;
				}
				else
				{
					pc->next = pa;
				}
				pa = pa->next;
				pb = pb->next;
			}
		}

		if (pa->expn < pb->expn)
		{
			if (pc == Lc)
			{

				pc = pa;
			}
			else
			{
				pc->next = pa;
			}
			pa = pa->next;
		}
		else if(pa->expn > pb->expn)
		{
			if (pc == Lc)
			{

				pc = pb;
			}
			else
			{
				pc->next = pb;
			}
			pb = pb->next;
		}
	}
}
int main()
{
	LinkList Ax = NULL, Bx = NULL;
	int  An, Bn;
	printf("请输入Ax的项数：");
	scanf_s("%d", &An);
	CreateList(&Ax, An);

	printf("请输入Bx的项数：");
	scanf_s("%d", &Bn);
	CreateList(&Bx, Bn);

	AddList(Ax, Bx);
	return 0;
}