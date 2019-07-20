//给出一个包含n个整数的数列，问整数a在数列中的第一次出现是第几个。
#include<stdio.h>
#define SIZE 99
int main()
{
	int a[SIZE] = {0};
	int n = 0;
	int i = 0;
	int num = 0;
	int res = -1;
	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}

	scanf_s("%d", &num);

	for (i = 0; i < n; i++)
	{
		if (a[i] == num)
		{
			res = i + 1;
			break;
		}
	}

	printf("%d\n", res);
	return 0;
}