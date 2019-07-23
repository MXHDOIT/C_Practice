//���һ������ 2011 �� 1 �� 1 �տ�ʼÿ�����һ���棬����ɹһ���������ʵ�ֵ����� 2011 1 �� 1 ���Ժ������һ�죬�����������ڴ��滹����ɹ����
//��������һӦ��֪���������һ�����2011��1��1�գ���ȥ�����죬�ڶ�����������ģ����if(n%5<4 && n>0)Ϊ�������ɹ��

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
		printf("����\n");
	}
	else
	{
		printf("ɹ��\n");
	}

	return 0;
}