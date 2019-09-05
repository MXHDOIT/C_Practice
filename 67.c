#include<stdio.h>
#include <stdlib.h>
void Sort(int *a,int left,int right);  //利用快速排序对数组进行排序

void Printf_arr(int* a, int begin, int end); //遍历输出数组
int main()
{
	int n = 0;
	int i = 0;
	scanf_s("%d", &n);   //输入对多少数进行排序

	int* arr = (int *)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", arr + i);
	 }

	Sort(arr, 0, n - 1);
	Printf_arr(arr, 0, n - 1);
	return 0;
}


void Sort(int* a, int left, int right)
{
	int i = left;
	int j = right;
	int key = a[left];
	if (i >= j)
		return ;
	while (i < j)
	{
		if (i < j && key <= a[j])
		{
			j--;
		}
		a[i] = a[j];
		if (i < j && key >= a[i])
		{
			i++;
		}
		a[j] = a[i];
	}
	a[i] = key;

	Sort(a, left, i - 1);
	Sort(a, i + 1, right);

}

void Printf_arr(int* a, int begin, int end)
{
	int i = 0;
	for (i = begin; i <= end; i++)
	{
		printf("%d ", a[i]);
	}
}