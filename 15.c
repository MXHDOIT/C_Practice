//��������������m��n���������Լ������С������
#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int y = 0;
	int j = 0;
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	y = m;

	//while (y != 0)  //���Լ�����
	//{
	//	y = m % n;
	//	m = n;
	//	n = y;
	//}
	//printf("���Լ��=%d\n", m);
	

	for (j = n; n > 0; j++)  //��С������       **  ���Լ��*��С������ = ������֮��
	{
		if (j%n == 0 && j%m == 0)
		{
			printf("%d\n", j);
			break;
		}
	}
	return 0;
}