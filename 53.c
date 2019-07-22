//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。

#include<stdio.h>

void Show(int n)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d*%-2d=%-5d", j, i, i * j);
		}
		printf("\n");
	}
}
int main()
{
	int n = 0;
	scanf_s("%d", &n);

	Show(n);
	return 0;
}