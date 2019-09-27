#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct Node
{
	float coef;  //ϵ��
	int  expn;   //ָ��
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
		printf("�������%d����ϵ����ָ����",i++);
		scanf_s("%f%d", &coef, &expn);
		InsertTail(list, coef,expn);
	}
}


LinkList AddList(LinkList La, LinkList Lb)
{
	
	LinkList Lc = NULL;
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
				if (Lc == NULL)
				{
					
					Lc = pa;
					
				}
				else
				{
					pc->next = pa;
				}
				pc = pa;
				pa = pa->next;
				pb = pb->next;
				
			}
		}else if (pa->expn < pb->expn)
		{
			if (Lc == NULL)
			{

				Lc = pa;
			}
			else
			{
				pc->next = pa;
			}
			pc = pa;
			pa = pa->next;
		
		}
		else if(pa->expn > pb->expn)
		{
			if (Lc == NULL)
			{

				pc = pb;
			}
			else
			{
				pc->next = pb;
			}
			pc = pb;
			pb = pb->next;
			
		}
	}

	if (pc != NULL)
	{
		if (pa)
			pc->next = pa;
		else
			pc->next = pb;
	}
	else
	{
		Lc = pa ? pa : pb;
	}

	
	return Lc;
}


void Print(LinkList list)
{
	Node* p = list;

	while (p->next)
	{
		printf("%.1f* X ^%d +",p->coef, p->expn);
		p = p->next;
	}
	printf("%.1f* X ^%d \n", p->coef, p->expn);

}

int main()
{
	LinkList Ax = NULL, Bx = NULL;
	int  An, Bn;
	printf("������Ax��������");
	scanf_s("%d", &An);
	CreateList(&Ax, An);

	printf("Ax����Ϊ��");
	Print(Ax);
	printf("������Bx��������");
	scanf_s("%d", &Bn);
	CreateList(&Bx, Bn);
	printf("Bx����Ϊ��");
	Print(Bx);
	/*Print(Ax);*/

	LinkList Cx = AddList(Ax, Bx);
	printf("��Ӻ���Ϊ��");
	Print(Cx);
	return 0;
}