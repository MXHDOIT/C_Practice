//һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ��������������6 = 1��2��3.����ҳ�1000���ڵ�����������
#include<stdio.h>
int main()
{
	
	int i = 2;
	int j = 0;
	int k = 0;
	int sum = 0;

	for (i = 2; i <= 1000; i++)
	{	
		k = 0;
		sum = 0;
		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}

		if (sum == i)
		{
			printf("%d ", i);
		}
	}
	return 0;
}