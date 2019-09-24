#include"list.h"


void InitList(SeqLis& L)
{
	L.
}

int ListInsert(SeqList* L, int i, int val)    //插入    平均移动次数 ： E(ins) = 1/(n+1)*(n+……+1+0) = n/2;   所以时间复杂度为O(n);
{
	if (i < 1 || i> L->last)
		return 0;
	if (L->last == MAXSIZE)
		return 0;
	for (int j = L->last - 1; j >= i - 1; j--)
	{
		L->elem[j + 1] = L->elem[j];
	}

	L->elem[i - 1] = val;
	L->last++;
	return 1;
}