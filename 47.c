//编写一个函数实现n^ k，使用递归实现

#include<stdio.h>

int F(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return F(n - 1) * n;
	}
}
int main()
{
	int n;
	

	scanf_s("%d", &n);
	printf("%d\n", F(n));
	return 0;
}