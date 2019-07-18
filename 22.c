//题目：打印出如下图案（菱形）
//   *
//  ***
// ******
//********
// ******
//  ***
//   *
#include<stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	int k = 0;
	scanf_s("%d", &n);

	if (n % 2 == 1)
	{
		for (i = 0; i < n / 2; i++)
		{
			for (j = 0; j < n / 2 - i; j++)
			{
				printf(" ");
			}
			for (k = 0; k < i * 2 + 1; k++)
			{
				printf("*");
			}
			printf("\n");
		}
		for (j = 0; j < n; j++)
		{
			printf("*");
		}
		printf("\n");
		for (i = 0; i < n / 2; i++)
		{
			for (j = 0; j <= i ; j++)
			{
				printf(" ");
			}
			for (k = 0; k < (n / 2 - i) * 2 - 1; k++)
			{
				printf("*");
			}

			printf("\n");
		}
	}
	return 0;
}