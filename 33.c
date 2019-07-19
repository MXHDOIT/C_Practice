//求一个3 * 3矩阵对角线元素之和
#include<stdio.h>
int main()
{
	int arr[3][3] = { 0 };
	int sum = 0;
	int i = 0;
	int j = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			scanf_s("%d",&arr[i][j]);
	}

	for (i = 0; i < 3; i++)
	{
		sum += arr[i][i];
	}

	printf("%d\n", sum);
	return 0;
}