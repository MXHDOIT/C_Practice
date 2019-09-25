#pragma once


#include<stdio.h>
#define MAXSIZE 100
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0

typedef int Status;
typedef int ElemType;


typedef struct
{
	ElemType elem[MAXSIZE];
	int last;
}SeqList;


Status GetElem(SeqList L, int i, ElemType e); /*获取线性表中的第i个元素/用e返回L中的第i个元素的值*/

Status ListInsert(SeqList *L, int i, int val);

/*删除第i个数据元素,并用e返回其值,L的长度减1*/
Status ListDelete(SeqList* L, int i, ElemType* e);


/*遍历所有元素*/
void ListErgodic(SeqList* L);

