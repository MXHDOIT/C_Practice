////����һ���������飬����Ҫ��ԭ��ɾ���ظ����ֵ�Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ�Σ������Ƴ���������³��ȡ�
//
//��Ҫʹ�ö��������ռ䣬�������ԭ���޸��������鲢��ʹ�� O(1) ����ռ����������ɡ�


#include<stdio.h>


int removeDuplicates(int* nums, int numsSize);     //����һ��ʱ��Ч�ʵ�
int removeDuplicates1(int* nums, int numsSize);    //����������Է���һʱ��Ч�ʸ�
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