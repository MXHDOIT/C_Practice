/*������ĸ�������һЩ������ͼ�Σ����������һ�����ӣ�
ABCDEFG
BABCDEF
CBABCDE
DCBABCD
EDCBABC
����һ��5��7�е�ͼ�Σ����ҳ����ͼ�εĹ��ɣ������һ��n��m�е�ͼ�Ρ�
�����ʽ
����һ�У�������������n��m���ֱ��ʾ��Ҫ�����ͼ�ε�������������
�����ʽ
���n�У�ÿ��m���ַ���Ϊ���ͼ��*/


#include<stdio.h>
#define N 10

int main()
{
	int n = 0;
	int m = 0;
	char arr[N][N] = { 0 };
	int i = 0;
	int j = 0;
	char c = 0;

	scanf_s("%d%d", &n, &m);

	for (i = 0; i < n; i++)
	{
		c = 'A';
		for (j = i; j < m; j++)
		{
			arr[i][j] = c++;
		}

		c = 'A';
		for (j = i - 1; j >= 0; j--)
		{
			arr[i][j] = ++c;
		}
	}


	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}