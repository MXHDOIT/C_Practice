//给定一个由整数组成的非空数组所表示的非负整数，在该数的基础上加一。最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。
//你可以假设除了整数 0 之外，这个整数不会以零开头。
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define SIZE 9

int* plusOne(int* digits, int digitsSize, int* returnSize) 
{
	int i = digitsSize-1;
	for (i; i>= 0; i--)
	{
		if (digits[i] < 9)
		{
			digits[i]++;
			*returnSize = digitsSize;
			return digits;
		}
		digits[i] = 0;
	}

	int* p = (int*)malloc(sizeof(int)*(digitsSize+1));
	assert(p != NULL);
	p[0] = 1;
	for (i = 1; i <= digitsSize; i++)
	{
		p[i] = 0;
	}
	*returnSize = digitsSize + 1;
	return p;
}


int main()
{
	int arr[] = { 9,9,9};
	int len = sizeof(arr) / sizeof(arr[0]);
	int* a = arr;

	a = plusOne(arr, len, &len);


	for (int i = 0; i < len; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}




#if 0
int plusOne(int* digits, int digitsSize) 
{
	int i = 0;
	int flag = 1;
	for (i = digitsSize; i > 0; i--)
	{
		digits[i] = digits[i] + flag;
		flag = digits[i] / 10;
		digits[i] %= 10;
	}

	if (digits[1] == 0)
	{
		digits[0] = 1;
		return 0;
	}
	return 1;
}

int main()
{
	int arr[SIZE] = { 0 };
	int i = 1;
	int n = 0;
	scanf_s("%d", &n);

	for (i; i <= n; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	i = plusOne(arr, n);

	while (i <= n)
	{
		printf("%d", arr[i]);
		i++;
	}
	return 0;
}
#endif