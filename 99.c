//给定两个有序整数数组 nums1 和 nums2，将 nums2 合并到 nums1 中，使得 num1 成为一个有序数组。
//
//说明 :
//
//初始化 nums1 和 nums2 的元素数量分别为 m 和 n。
//你可以假设 nums1 有足够的空间（空间大小大于或等于 m + n）来保存 nums2 中的元素。
#include<stdio.h>
#define SIZE 20
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
	int len = m + n-1;
	m = m - 1;
	n = n - 1;
	while (m >= 0 && n >= 0)
	{
		if (nums1[m] > nums2[n])
		{
			nums1[len--] = nums1[m--];
			
		}
		else
		{
			nums1[len--] = nums2[n--];
		}
	}

	
	while (n>=0)
	{
		nums1[len--] = nums2[n--];
		
	}
}

int main()
{
	int arr[SIZE];
	int brr[SIZE];
	int i;
	int numa, numb;
	scanf_s("%d", &numa);
	scanf_s("%d", &numb);

	for (i = 0; i < numa; i++)
	{
		scanf_s("%d", arr + i);
	}

	for (i = 0; i < numb; i++)
	{
		scanf_s("%d", brr + i);
	}

	merge(arr, numa, numa, brr, numb, numb);

	for (i = 0;i < numb + numa; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}