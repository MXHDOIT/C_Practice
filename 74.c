#include<stdio.h>

unsigned int reverse_bit(unsigned int n)
{
	unsigned int sum = 0;
	int i = 0;
	sum = sum * 2 + (n & 1);
	for (i = 0; i < 31; i++)
	{
		n = n >> 1;
		sum = sum * 2 + (n & 1);

	}

	return sum;
}
int main()
{
	unsigned int num = 25;

	printf("%u", reverse_bit(num));
	return 0;
}