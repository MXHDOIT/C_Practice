//创建一个数组， 实现函数init（）初始化数组、 实现empty（）清空数组、 实现reverse（）函数完成数组元素的逆置。 要求：自己设计函数的参数，返回值

#include<stdio.h>

void Init(int *arr,int len)
{
	int i = 0;
	for (; i < len; i++)
	{
		scanf_s("%d", arr+i);
	}
}

void Empty(int *arr, int len)
{
	int i = 0;
	for (; i < len; i++)
	{
		*(arr + i) = 0;
	}
}

void Reverse(int* arr, int len)
{
	int i = 0;
	int j = len - 1;
	int temp = 0;
	for (i, j; i < j; i++, j--)
	{
		temp = *(arr + i);
		*(arr + i) = *(arr + j);
		*(arr + j) = temp;
	}
}

int main()
{
	int arr[10] = { 0 };
	int len = sizeof(arr) / sizeof(arr[0]);
	Init(arr,len);

	//Empty(arr, len);

	Reverse(arr, len);
	printf("%d", arr[0]);
	return 0;
}