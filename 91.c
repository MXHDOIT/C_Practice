#include<stdio.h>

int searchInsert(int* nums, int numsSize, int target);

int searchInsert(int* nums, int numsSize, int target)
{
	int i = 0;
	for (i = 0; i < numsSize; i++)
	{
		if (nums[i] >= target)
		{
			return i;
		}
	}
	return numsSize;
}
int main() 
{
	int arr[] = { 1,3,5,6 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int key = 0;
	scanf_s("%d", &key);

	int n = searchInsert(arr,len,key);
	printf("%d\n", n);
	return 0;
}

