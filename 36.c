//输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10] = { 0 };
	//int *a = (int*)malloc(sizeof(int) * 10);
	int max = 0;
	int ax = 0;
	int min = 0;
	int in = 0;
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a[i]);
	}

	ax = a[0];
	for (i = 0; i < 10; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			ax = i;
		}
	}

	a[ax] = a[0];
	a[0] = max;

	min = a[9];

	for (i = 0; i < 10; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			in = i;
		}
	}

	a[in] = a[9];
	a[9] = min;



	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}