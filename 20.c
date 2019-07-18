//猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下
//的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。
#include<stdio.h>
//int main()
//{
//	int num = 1;
//	
//	int i = 0;
//
//	for (i = 9; i > 0; i--)
//	{
//		num = (num + 1) * 2;
//	}
//	printf("%d\n", num);
//	return 0;
//}

int main()
{
	int day, x1, x2;
	day = 9;
	x2 = 1;
	while (day > 0)
	{
		x1 = (x2 + 1) * 2;/*第一天的桃子数是第2天桃子数加1后的2倍*/
		x2 = x1;
		day--;
	}
	printf("the total is %d\n", x1);
}