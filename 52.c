//递归方式实现打印一个整数的每一位

#include<stdio.h>

void Put(int n)
{
	if (n < 10)
	{
		printf("%d ", n);
	}
	else
	{
		Put(n / 10);
		printf("%d ", n % 10);
	}
}
int main()
{
	int num = 0;

	scanf_s("%d", &num);
	Put(num);

	return 0;
}