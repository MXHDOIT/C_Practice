//��һ�������У�2 / 1��3 / 2��5 / 3��8 / 5��13 / 8��21 / 13...���������е�ǰ20��֮�͡�
#include<stdio.h>
int main()
{
	double a = 2;
	double b = 1;
	int i = 0;
	double sum = 0;

	for (i = 0; i < 20; i++)
	{
		sum += a / b;
		a = a + b;
		b = a - b;
	}

	printf("%lf\n", sum);
	return 0;
}

//int main()
//{
//	int n, t, number = 20;
//	float a = 2, b = 1, s = 0;
//	for (n = 1; n <= number; n++)
//	{
//		s = s + a / b;
//		t = a; a = a + b; b = t;/*�ⲿ���ǳ���Ĺؼ�������߲²�t������*/
//	}
//	printf("sum is %9.6f\n", s);
//}