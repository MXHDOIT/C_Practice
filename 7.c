//���9 * 9�ھ�

#include<stdio.h>

int main()
{
	int i = 1;
	int j = 1;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d = %-4d", i, j, i * j);   //%-3d��ʾ ����루-�� ռ3���ַ�λ��3��
		}
		printf("\n");
	}
	return 0;
}