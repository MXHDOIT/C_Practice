//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���

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