#include<stdio.h>

int fun(int n)
{
	int  a[10] = { 6,2,5,5,4,5,6,3,7,6 };   //����a��ʾ0~9ÿ��������Ҫ�Ļ����
	int sum = 0;

	while (n/10 != 0)
	{
		sum += a[n % 10];
		n = n/10;
	}
	sum += a[n];
	return sum;
}
int main()
{
	
	int num = 0;     //��ʾ����Ļ����
	int a = 0, b = 0, c = 0;   // a+b=c
	int sum = 0;
	scanf_s("%d", &num);
	for (a = 0; a <= 1111; a++)
	{
		for (b = 0; b <= 1111; b++)
		{
			c = a + b;

			if (fun(a) + fun(b) + fun(c) ==(num - 4))   //num-4����+��=����Ҫ�Ļ����
			{
				printf("%d+%d=%d\n", a, b, c);
				sum++;
			}
		}
	}
	

	printf("sum = %d\n", sum);
	return 0;
}