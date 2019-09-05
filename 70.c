#include<stdio.h>
#include<math.h>

int OddNum(unsigned int value)
{
	int i=0,count = 0,sum = 0;
	for (i = 1; i < 16; i++)
	{
		sum = sum + (double)((value & 1)*pow(10, (double)(i - 1)));
		value >>= 2;
	}
	return sum;
}

int EvenNum(unsigned int value)
{
	int i = 0, sum = 0;
	value = value >> 1;
	for (i = 1; i < 16; i++)
	{
		sum = sum + (double)((value & 1) * pow(10, (double)(i - 1)));
		value >>= 2;
	}
	return sum;
}

int main()
{
	unsigned int num = 231;
	int odd = OddNum(num);
	int even = EvenNum(num);
	printf("odd = %d,even = %d\n", odd,even);
	return 0;
}