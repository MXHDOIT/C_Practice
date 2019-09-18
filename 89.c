////给定一个排序数组，你需要在原地删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。
//
//不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。


#include<stdio.h>


int removeDuplicates(int* nums, int numsSize);     //方法一：时间效率低
int removeDuplicates1(int* nums, int numsSize);    //方法二：相对方法一时间效率高
int removeDuplicates(int* nums, int numsSize)  
{
	int head = 0;
	int tail = numsSize - 1;
	if (numsSize == 1)
	{
		return 1;
	}

	while (head < tail)
	{
		if (nums[head] != nums[head + 1])
		{
			head++;
		}
		else
		{
			for (int i = head + 1; i < tail; i++)
			{
				nums[i] = nums[i + 1];
			}
			tail--;
		}
	}

	return tail + 1;
}

int removeDuplicates1(int* nums, int numsSize)
{
	int i = 1;
	int j = 1;
	int flag = 0;

	while (i < numsSize)
	{
		if (nums[i] == nums[i - 1])
		{
			i++;
		}
		else
		{
			nums[j] = nums[i];
			j++;
			i++;
		}
	}
	return j;
}



int main()
{
	int arr[] = { 0,0,0,1,1,2,2,3,4 };
	int len = sizeof(arr) / sizeof(arr[0]);

	//int len2 = removeDuplicates(arr, len);
	int len2 = removeDuplicates1(arr, len);
	for (int i = 0; i < len2; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}