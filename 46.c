//递归和非递归分别实现求第n个斐波那契数。
#include<stdio.h>
#define SIZE 99
int  F1(int n)
{
	int arr[SIZE] = { 0 };
	int i = 0;
	arr[0] = 1;
	arr[1] = 1;

	for (i = 2; i < n; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	return arr[n-1];
}


int F2(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return F2(n - 1) + F2(n - 2);
	}
}
int main()
{
	
	int n = 0;
	int result = 0;
	scanf_s("%d", &n);
	
	result = F1(n);//非递归
	printf("%d\n", result);

	result = F2(n);//递归
	printf("%d\n", result);
	return 0;
}
