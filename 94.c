#include<stdio.h>


double Mypow(int a, int n)
{
	double  sum = 1;
	if (n > 0)
	{
		while (n--)
		{
			sum *= a;
		}
	}
	else if (n < 0)
	{
		int n1 = -n;
		while (n1--)
		{
			sum /= a;
		}
	}

	return sum;
}

double Mypow1(int a, int n)
{
	double sum = 1;
	while (n)
	{
		if (n % 2 == 1)
		{
			sum *= a;
		}
		a *= a;
		n /= 2;
	}

	return sum;
}

int main()
{
	int a = 0;
	int n = 0;
	scanf_s("%d%d", &a, &n);

	double sum = Mypow1(a, n);
	printf("%lf", sum);
	return 0;
}