//��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ���

#include<stdio.h>

int main()
{
	int a = 1;
	int b = 1;
	int c = 1;
	int count = 0;

	for (a = 1; a <= 4; a++)
	{
		for (b = 1; b <= 4; b++)
		{
				for (c = 1; c <= 4; c++)
				{
					if ((a != b) &&( a!= c) && (b!=c)) {
						count++;
						printf("%d ", a*100 + 10 * b + c);
					}
				}
		}
		
	}
	printf("%d\n", count);
	return 0;
}
