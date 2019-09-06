#include<stdio.h>

double AverageNum1(int num1, int num2)
{

	return num2 + (num1 - num2)*1.0 / 2.0;
}
int main()
{
	int a = 0;
	int b = 0;
	double average = 0;
	scanf_s("%d%d", &a, &b);

	average = AverageNum1(a, b);
	printf("%lf\n", average);

	return 0;
}