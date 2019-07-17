//打印出所有的“水仙花数”，所谓“水仙花数”是指一个三位数，其各位数字立方和等于该数本身。例如：153是一个“水仙花数”，因为153 = 1的三次方＋5的三次方＋3的三次方
#include<stdio.h>
#include<math.h>

int main()
{
	int num = 100;
	int sum = 0;
	int count = 0;
	int n = 0;

	for (num = 100; num < 1000; num++)
	{
		sum = 0;
		n = num;
		while (n > 0)
		{
			sum += pow((n % 10), 3);
			n /= 10;
		}

		if (sum == num)
		{
			count++;
			printf("%d ", sum);
		}
	}

	printf("\n %d \n", count);
	return 0;
}