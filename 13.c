//将一个正整数分解质因数。例如：输入90, 打印出90 = 2 * 3 * 3 * 5
#include<stdio.h>

int main()
{
	int num = 0;
	int i = 2;
	scanf_s("%d", &num);

	printf("%d = ", num);
	for (i = 2; i <= num; i++)
	{
		while (num != i)
		{
			if (num % i == 0)
			{
				printf("%d*", i);
				num /= i;
			}
			else
			{
				break;
			}
		}
	}

	printf("%d", num);
	return 0;
}




