//给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字

#include<stdio.h>
#include<math.h>
int Hmd(int num)
{
	if (num < 10)
	{
		return 1;
	}
	else
	{
		return Hmd(num / 10) + 1;
	}
}

void Pri(int num)
{
	if (num < 10) {
		printf("%d ", num);
	}
	else
	{
		/*Pri(num % (int)pow(10, (k - 1)), k - 1);
		printf("%d ", (int)(num / pow(10, (k - 1))));*/
		printf("%d ", num % 10);
		Pri(num / 10);

	}
}

int main()
{ 
	int num = 0;
	int k = 0;
	scanf_s("%d", &num);

	k = Hmd(num);
	printf("%d\n",k);

	Pri(num);
	return 0;
}