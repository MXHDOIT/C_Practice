#include"list.h"


int main()
{
	SeqList	Q;
	Q.last = 0;
	int number;
	ListInsert(&Q, 1, 23);  //插入一个元素 
	ListInsert(&Q, 1, 22);  //插入一个元素 
	ListInsert(&Q, 2, 21);  //插入一个元素 

	ListErgodic(&Q);   //遍历所有元素 
	printf("当前的长度为%d\r\n", Q.last);

	ListDelete(&Q, 2, &number); //删除第2个元素
	printf("当前的长度为%d\r\n", Q.last);
	printf("删除的元素是%d\r\n", number);


	return 0;
}



//
//int i = 0;
//int e = 0;
//InitList(L); //初始化
//
//
//DestroyList(L); //销毁
//ClearList(&L);  //清除
//ListEmpty(L);   //判空
//ListLength(L);  //长度
//GetElem(L, i, &e);  //获取元素
//LocateElem(L, e, compare()); //查找定位   compare()是元素判定函数
//PriorElem(L, cur_e, &pre_e);  //求前驱元素
//NextElem(L, cur_e, &next_e);   //求后继元素
//ListInsert(&L, i, e);     //插入元素
//ListDelete(&L, i, &e);   //删除元素
//ListTraverse(&L, visited()); //遍历