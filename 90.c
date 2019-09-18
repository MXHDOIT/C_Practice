//给定一个数组 nums 和一个值 val，你需要原地移除所有数值等于 val 的元素，返回移除后数组的新长度。
//
//不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。
//
//元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。
#include<stdio.h>

int removeElement(int* nums, int numsSize, int val); //方法1：双指针

int removeElement2(int* nums, int numsSize, int val);//方法2：双指针


int removeElement(int* nums, int numsSize, int val)
{
	int i = 0;
	int j = 0;
	int count = 0;
	while (i < numsSize)
	{
		if (nums[i] != val)
		{
			nums[j++] = nums[i];
			count++;
		}
		i++;
	}

	return count;
}


int removeElement2(int* nums, int numsSize, int val)
{
	int i = 0;
	while (i < numsSize)
	{
		if (nums[i] == val)
		{
			nums[i] = nums[numsSize - 1];
			numsSize--;
		}
		else
		{
			i++;
		}
	}

	return numsSize;
}
int main()
{
	int arr[] = { 0,1,2,2,3,0,4,2 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int key = 0;
	int newLen = 0;
	scanf_s("%d", &key);
	newLen  = removeElement2(arr, len, key);

	for (int i = 0; i < newLen; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}