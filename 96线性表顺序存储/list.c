#include"list.h"


void InitList(SeqLis& L)
{
	L.
}

int ListInsert(SeqList* L, int i, int val)    //����    ƽ���ƶ����� �� E(ins) = 1/(n+1)*(n+����+1+0) = n/2;   ����ʱ�临�Ӷ�ΪO(n);
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