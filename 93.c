#include<stdio.h>


void output(int* a, int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void del(int* a, int* len, int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < *len; i++)
	{
		if (a[i]<x || a[i]>y)
		{
			a[j++] = a[i];
		}
	}
	*len = j;
}
int main()
{
	int a[] = { 0,1,2,3,4,5,6,7 };
	int len = sizeof(a) / sizeof(a[0]);
	int x = 0;
	int y = 0;
	scanf_s("%d%d", &x, &y);

	printf("原数组序列为：");
	output(a, len);
	del(a, &len, x, y);
	printf("新数组序列为：");
	output(a, len);
	return 0;
}