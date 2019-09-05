#include<stdio.h>

int Different(unsigned int m, unsigned int n)
{
	int count = 0;
	int ret = m ^ n;

	while (ret)
	{
		count++;
		ret = ret & (ret - 1);
	}

	return count;
}
int main()
{
	unsigned int m = 0;
	unsigned int n = 0;

	scanf_s("%d%d", &m, &n);
	int count = Different(m, n);

	printf("%d\n", count);
	return 0;
}