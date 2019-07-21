//’€∞Î≤È’“
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int len = sizeof(arr) / sizeof(arr[0]);
	int num = 0;
	int right = len-1;
	int left = 0;
	int mid = (right + left) / 2;

	for (i = 0; i < len; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	scanf_s("%d", &num);

	while(left <= right)
	{
		if (num > arr[mid])
		{
			left = mid + 1;
		}
		else if (num < arr[mid])
		{
			right = mid - 1;
		}else{
			break;
		}
		mid = (right + left) / 2;
	}
	
	if(arr[mid] == num)
	{
		printf("%d\n", mid+1);
	}


	return 0;
}
