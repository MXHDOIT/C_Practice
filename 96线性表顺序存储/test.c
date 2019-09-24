#include"list.h"


int main()
{
	SeqList L;
	int i = 0;
	int e = 0;
	InitList(&L); //初始化
	DestroyList(&L); //销毁
	ClearList(&L);  //清除
	ListEmpty(L);   //判空
	ListLength(L);  //长度
	GetElem(L, i, &e);  //获取元素
	LocateElem(L, e, compare()); //查找定位   compare()是元素判定函数
	PriorElem(L, cur_e, &pre_e);  //求前驱元素
	NextElem(L, cur_e, &next_e);   //求后继元素
	ListInsert(&L, i, e);     //插入元素
	ListDelete(&L, i, &e);   //删除元素
	ListTraverse(&L, visited()); //遍历
	return 0;
}