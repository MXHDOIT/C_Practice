//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
//}
#include<stdio.h>


int CountOneBits(unsigned int value)
{
	int count = 0;
	/* 1. int i = 0;
	for (i = 0; i <= 31; i++)
	{
		count += value & 1;
		value >>= 1;
	}*/


	while (value)
	{
		count++;
		value = value & (value - 1);
	}
	return count;
}
int main()
{
	unsigned int num = 15;
	int count = CountOneBits(num);

	printf("%d\n", count);
	return 0;
}

