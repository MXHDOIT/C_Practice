//���õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������
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