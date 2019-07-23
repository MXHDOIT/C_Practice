//如果一个渔夫从 2011 年 1 月 1 日开始每三天打一次渔，两天晒一次网，编程实现当输入 2011 1 月 1 日以后的任意一天，输出该渔夫是在打渔还是在晒网。
//分析：第一应该知道输入的那一天距离2011年1月1日，过去多少天，第二用天数进行模运算if(n%5<4 && n>0)为打渔否则晒网

#include<stdio.h>

int Isleap(int year)
{
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		return 1;
	else
		return 0;
}

int Num(int y, int m, int d)
{
	int sum = 0;
	int i = 2011;
	int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	for (i; i < y; i++)
	{
		if (Isleap(i))
		{
			sum += 366;
		}
		else
		{
			sum += 365;
		}
	 }

	for (i = 0; i < m; i++)
	{
		sum += arr[i];
	}

	sum += d;


	if (Isleap(y) && (m > 2))
	{
		sum += 1;
	}

	return sum;


}

int main()
{
	int year = 0;
	int month = 0;
	int day = 0;
	int n = 0;

	scanf_s("%d%d%d", &year, &month, &day);

	n = Num(year, month, day);

	if (n % 5 > 0 && n % 5 < 4)
	{
		printf("打渔\n");
	}
	else
	{
		printf("晒网\n");
	}

	return 0;
}