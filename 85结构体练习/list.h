#pragma once
#include<stdio.h>
#include<stdlib.h>


typedef struct Node
{
	int data;
	struct Node* next;
}Node, * Plist;


void InitList(Plist plist);//初始化


//得到一个节点
Node* GetNode(int val);
//头插法
void InsertHead(Plist plist,int val);
//尾插法
void InsertEnd(Plist plist, int val);
//返回单链表的长度
int GetLen(Plist plist);
//输出
void Show(Plist plist);