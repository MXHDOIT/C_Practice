//Çó1 + 2!+ 3!+ ... + 20!µÄºÍ
#include<stdio.h>
int main()
{
	int i = 1;
	int t = 1;
	int sum = 1;

	for (i = 1; i <= 20; i++)
	{
		t *= i;
		sum += t ;
	}

	printf("%ld\n", sum);
	return 0;
}