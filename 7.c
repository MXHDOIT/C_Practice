//输出9 * 9口诀

#include<stdio.h>

int main()
{
	int i = 1;
	int j = 1;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d = %-4d", i, j, i * j);   //%-3d表示 左对齐（-） 占3个字符位（3）
		}
		printf("\n");
	}
	return 0;
}