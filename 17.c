//��s = a + aa + aaa + aaaa + aa...a��ֵ������a��һ�����֡�����2 + 22 + 222 + 2222 + 22222(��ʱ����5�������)������������м��̿��ơ�
#include<stdio.h>
int main()
{
	int a = 0;
	int num = 0;
	int i = 0;
	int m = 0;
	int sum = 0;
	scanf_s("%d%d", &a, &num);

	for (i = 1; i <= num; i++)
	{
		m += a;
		sum += m;
		a *= 10;
	}

	printf("%d\n", sum);
	return 0;
}