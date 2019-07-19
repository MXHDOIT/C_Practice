//利用递归函数调用方式，将所输入的5个字符，以相反顺序打印出来。
#include<stdio.h>

void Reversed(int n)
{
	char c = 0;
	if (n <= 1)
	{
		c = getchar();
		putchar(c);
	}
	else
	{
		c = getchar();
		Reversed(n - 1);
		putchar(c);
	}
}

int main()
{
	int n = 5;

	Reversed(n);
	return 0;
}