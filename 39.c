//八进制与二进制相互转换
//八进制--》二进制      ===   八进制 --》十进制 --》二进制
//二进制--》八进制      ===   二进制 --》十进制 --》八进制

#include<stdio.h>
#include<math.h>

int Exchange(int n)   //二进制变八进制
{
	int sum = 0;
	int total = 0;
	int i = 0;

	while (n > 0)
	{
		sum += (n % 10) * pow(2, i++);
		n /= 10;
	}
	i = 0;
	while (sum > 0)
	{
		total += (sum % 8) * pow(10, i++);
		sum /= 8;
	}

	return total;
}


long long Exchange2(int n)  //将八进制转化为二进制
{
	int sum = 0;
	int i = 0;
	long long total = 0;

	while (n > 0)
	{
		sum += (n % 10) * pow(8, i++);
		n /= 10;
	}

	i = 0;
	while (sum > 0)
	{
		total += (sum % 2) * pow(10, i++);
		sum /= 2;
	}

	return total;
}

int main()
{
	long long num1 = 0;

	int num2 = 0;

	printf("请输入一个二进制的数：");
	scanf_s("%lld", &num1);

	printf("将二进制的数 %lld 转化为八进制的 %d\n", num1, Exchange(num1));

	printf("请输入一个八进制的数：");
	scanf_s("%d", &num2);

	printf("将八进制的数 %d 转化为二进制的 %lld\n", num2, Exchange2(num2));

	return 0;
}