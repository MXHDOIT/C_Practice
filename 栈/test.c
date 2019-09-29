#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define OK 1
#define FALSE 0
#define SIZE 100

typedef struct
{
	int *top;
	int *base;
	int size;
}SeqStack;

//初始化
void InitStack(SeqStack* s)
{
	s->base = (SeqStack*)malloc(sizeof(SeqStack) * SIZE);
	assert(s->base);
	s->top = s->base;
	s->size = SIZE;
}
//销毁
int DestroyStack(SeqStack* s)
{
	if (s->base) {
		free(s->base);
		s->size = 0;
		s->base = NULL;
		s->top = NULL;
	}
	return OK;
}
//判空
int StackEmpty(SeqStack* s)
{

	if (s->base == s->top)
		return OK;
	else
		return FALSE;
}


//求栈的长度
int StackLength(SeqStack* s)
{
	return s->base - s->top;
}
//获取栈顶元素
GetTop()
{

}
//清空一个栈
int ClearStack(SeqStack* s)
{
	if (s->base)
		s->top = s->base;
	return OK;
}
//进栈
int PushStack(SeqStack* s,int e)
{
	if (s->top - s->base == s->size)
	{
		return FALSE;
	}
	else
	{
		*(s->top) = e;
		s->top++;
	}

	return OK;
}
//出栈
int PopStack(SeqStack* s, int *e)
{
	if (s->top = s->base)
	{
		return FALSE;
	}
	else
	{
		s->top--;
		*e = *(s->top);
	}
	return OK;
}

int main()
{
	SeqStack* s;
	return 0;
}