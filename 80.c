//调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数， 来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分， 所有偶数位于数组的后半部分。
#include<stdio.h>
#include<stdlib.h>

void Sort(int* s, int len)
{
	int left = 0;
	int right = len - 1;
	int temp = 0;

	while (left < right)
	{
		while(*(s + left) % 2 && left < right)
		{
			left++;
		}

		if (*(s + left) % 2 == 0)
		{
			temp = *(s + left);
		}
		
		while (*(s + right)%2 == 0 && left < right)
		{
			right--;
		}

		if (*(s + right) % 2 == 1)
		{
			s[left] = s[right];
			s[right] = temp;
		}
	}
}
int main()
{
	int n = 0;
	scanf_s("%d", &n);

	int* arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	Sort(arr, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}