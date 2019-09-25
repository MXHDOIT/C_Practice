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


Status GetElem(SeqList L, int i, ElemType e); /*��ȡ���Ա��еĵ�i��Ԫ��/��e����L�еĵ�i��Ԫ�ص�ֵ*/

Status ListInsert(SeqList *L, int i, int val);

/*ɾ����i������Ԫ��,����e������ֵ,L�ĳ��ȼ�1*/
Status ListDelete(SeqList* L, int i, ElemType* e);


/*��������Ԫ��*/
void ListErgodic(SeqList* L);

