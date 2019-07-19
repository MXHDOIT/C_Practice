//用递归求一个数组的最大值

#include<stdio.h>

int Max(int arr[], int len)
{
	if (len == 0)
	{
		return arr[len];
	}
	else
	{
		if (Max(arr, len - 1) > arr[len])
		{
			return Max(arr,len - 1);
		}
		else
		{
			return arr[len];
		}

	}
}
int main()
{
	int arr[10] = { 12,5,36,4,5,75,12,36,25,98 };
	int len = sizeof(arr) / sizeof(arr[0])-1;

	printf("%d\n", Max(arr, len));
	return 0;
}