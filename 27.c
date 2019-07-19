//用递归完成最大公约数
#include<stdio.h>
#if 0
int Div(int a, int b)
{
	if (a % b == 0)
	{
		return b;
	}
	else
	{
		return Div(b, a % b);
	}
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d%d", &a,&b);


	c = Div(a, b);
	printf("%d\n", c);
	return 0;
}
#endif

//走楼梯问题

int F(n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 2;

	}
	else
	{
		return F(n - 1) + F(n - 2);
	}
		

}

int main()
{
	int n = 0;

	scanf_s("%d", &n);

	printf("%d\n", F(n));
	return 0;
}