//利用递归方法求5! 
#include<stdio.h>

int Recursion(int n)
{
	if ((n == 0) || (n == 1))
	{
		return 1;
	}
	else
	{
		return n * Recursion(n - 1);
	}
		

}
int main()
{
	int n = 0;
	int sum = 0;

	scanf_s("%d", &n);

	sum = Recursion(n);

	printf("%d\n", sum);
	return 0;
}