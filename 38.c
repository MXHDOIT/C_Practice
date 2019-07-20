//八进制与十进制相互转换
#include<stdio.h>
#include<math.h>
int Exchange1(int n)
{
	int sum = 0;
	int i = 0;

	while (n > 0)
	{
		sum += ((n % 10) * pow(8, i++));
		n /= 10;
	}
	return sum;
}

Exchange2(int n)
{
	int sum = 0;
	int i = 0;

	while (n > 0)
	{
		sum += (n % 8) * pow(10, i++);
		n /= 8;
	}
	return sum;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("请输入一个八进制的数：\n");

	scanf_s("%d", &num1);
	printf("将八进制的%d转化为十进制的 %d:\n", num1, Exchange1(num1));

	printf("请输入一个十进制的数：\n");

	scanf_s("%d", &num2);
	printf("将十进制的%d转化为八进制的 %d:\n", num2, Exchange2(num2));
	return 0;
}