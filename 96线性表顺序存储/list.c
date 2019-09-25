#include"list.h"

Status GetElem(SeqList L, int i, ElemType *e)
{
	if (i < 1 || i > L.last || L.last ==0)
	{
		return ERROR;
	}
	*e = L.elem[i - 1];
	return OK;
}


Status ListInsert(SeqList* L, int i, int val)    //插入    平均移动次数 ： E(ins) = 1/(n+1)*(n+……+1+0) = n/2;   所以时间复杂度为O(n);
{
	if (i < 1 || i> L->last+1)
		return ERROR;
	if (L->last == MAXSIZE)
		return ERROR;
	for (int j = L->last - 1; j >= i - 1; j--)
	{
		L->elem[j + 1] = L->elem[j];
	}

	L->elem[i - 1] = val;
	L->last++;
	return OK;
}

/*删除第i个数据元素,并用e返回其值,L的长度减1*/
Status ListDelete(SeqList* L, int i, ElemType* e)
{
	if (L->last == 0)
	{
		return ERROR;
	}
	if (i < 1 || i> L->last)
	{
		return ERROR;
	}

	*e = L->elem[i - 1];
	if (i < L->last)
	{
		for (int j = i; j < L->last; j++)
		{
			L->elem[j - 1] = L->elem[j];
		}
	}

	L->last--;
	return OK;
}

/*遍历所有元素*/
void ListErgodic(SeqList* L)
{
	if (L->last == 0)
	{
		return;
	}
	for (int i = 0; i < L->last; i++)
	{
		printf("%d ", L->elem[i]);
	}
}
