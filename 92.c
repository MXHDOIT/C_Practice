#include<stdio.h>

int maxSubArray(int* nums, int numsSize) {
	int sum = 0;
	int max = nums[0];

	for (int i = 0; i < numsSize; i++)
	{
		if (sum > 0)
		{
			sum += nums[i];
		}
		else
		{
			sum = nums[i];
		}

		max = (max < sum) ? sum : max;
	}

	return max;
}

int main()
{
	int arr[] = { -2,1,-3,4,-1,2,1,-5,4 };
	int max = maxSubArray(arr, sizeof(arr) / sizeof(arr[0]));

	printf("%d\n", max);

	return 0;
}