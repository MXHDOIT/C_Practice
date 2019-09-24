#pragma once


#include<stdio.h>
#define MAXSIZE 100
#define TRUE 1
#define FALSE 0
#define OK 1
#define INFEASIBLE -1
#define OVERFLOW -2

typedef int Status;
typedef char ElemType;


typedef struct
{
	int elem[MAXSIZE];
	int last;
}SeqList;

void ListInsert(SeqList &L);