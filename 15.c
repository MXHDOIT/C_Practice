//输入两个正整数m和n，求其最大公约数和最小公倍数
#include<stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int y = 0;
	int j = 0;
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	y = m;

	//while (y != 0)  //最大公约数求解
	//{
	//	y = m % n;
	//	m = n;
	//	n = y;
	//}
	//printf("最大公约数=%d\n", m);
	

	for (j = n; n > 0; j++)  //最小公倍数       **  最大公约数*最小公倍数 = 两个数之积
	{
		if (j%n == 0 && j%m == 0)
		{
			printf("%d\n", j);
			break;
		}
	}
	return 0;
}