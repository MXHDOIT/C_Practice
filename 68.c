#include<stdio.h>
#define SIZE 1000

void Input_Arr(int a[], int len)
{
	int i = 0;
	int k = 0;

	for (i = 0; i < len; i++)
	{
		scanf_s("%d", &k);
		a[k]++;
	}
}

void Printf_Arr(int a[])
{
	int i = 0;
	for (i = 0; i < SIZE; i++)
	{
		if (a[i])
			printf("%d ", i);
	}
}
int main()
{
	int n = 0;
	int arr[SIZE] = { 0 };

	scanf_s("%d", &n);

	Input_Arr(arr, n);
	Printf_Arr(arr);
	return 0;
}