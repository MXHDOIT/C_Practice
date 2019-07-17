//要求输出国际象棋棋盘

#include<stdio.h>
#define	N 8

int main()
{
	
	int i = 0;
	int j = 0;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if ((i + j) % 2 == 0)
			{
				printf("%c ", 2);
			}
			else
			{
				printf("%c ", 1);
			}
		}
		printf("\n");
	}
	return 0;
}