
#include"list.h"



int main()
{
	Node head;

	InitList(&head);

	//头插法
	InsertHead(&head, 10);
	InsertHead(&head, 20);
	InsertHead(&head, 30);
	InsertHead(&head, 40);
	InsertHead(&head, 50);
	//尾插法
	InsertEnd(&head, 10);
	InsertEnd(&head, 20);
	/*InsertHead(&head, 10);
	InsertHead(&head, 20);
	InsertHead(&head, 30);*/ //为了证明InsertEnd（）方法2正确，但不建议
	//输出
		Show(&head);
		printf("%d\n", GetLen(&head));
	return 0;
}

























#if 0
struct A
{
	int a;
	int b;
};

struct  B
{
	int c;
	struct A* pa;
};
int main()
{
	struct A Aa;
	struct B bb = { 1,NULL };
	struct B bb2 = { 2,&Aa };

	printf("%d,%d,%d", bb.c, bb.pa->a, bb.pa->b);
	return 0;
}
#endif