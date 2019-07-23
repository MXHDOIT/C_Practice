//����һ�����飬 ʵ�ֺ���init������ʼ�����顢 ʵ��empty����������顢 ʵ��reverse���������������Ԫ�ص����á� Ҫ���Լ���ƺ����Ĳ���������ֵ

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