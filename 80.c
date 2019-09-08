//��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//
//����һ���������飬ʵ��һ�������� �����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣� ����ż��λ������ĺ�벿�֡�
#include<stdio.h>
#include<stdlib.h>

void Sort(int* s, int len)
{
	int left = 0;
	int right = len - 1;
	int temp = 0;

	while (left < right)
	{
		while(*(s + left) % 2 && left < right)
		{
			left++;
		}

		if (*(s + left) % 2 == 0)
		{
			temp = *(s + left);
		}
		
		while (*(s + right)%2 == 0 && left < right)
		{
			right--;
		}

		if (*(s + right) % 2 == 1)
		{
			s[left] = s[right];
			s[right] = temp;
		}
	}
}
int main()
{
	int n = 0;
	scanf_s("%d", &n);

	int* arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	Sort(arr, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}