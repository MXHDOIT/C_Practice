#pragma once
#include<stdio.h>
#include<stdlib.h>


typedef struct Node
{
	int data;
	struct Node* next;
}Node, * Plist;


void InitList(Plist plist);//��ʼ��


//�õ�һ���ڵ�
Node* GetNode(int val);
//ͷ�巨
void InsertHead(Plist plist,int val);
//β�巨
void InsertEnd(Plist plist, int val);
//���ص�����ĳ���
int GetLen(Plist plist);
//���
void Show(Plist plist);