//��ӡ�����еġ�ˮ�ɻ���������ν��ˮ�ɻ�������ָһ����λ�������λ���������͵��ڸ����������磺153��һ����ˮ�ɻ���������Ϊ153 = 1�����η���5�����η���3�����η�
#include<stdio.h>
#include<math.h>

int main()
{
	int num = 100;
	int sum = 0;
	int count = 0;
	int n = 0;

	for (num = 100; num < 1000; num++)
	{
		sum = 0;
		n = num;
		while (n > 0)
		{
			sum += pow((n % 10), 3);
			n /= 10;
		}

		if (sum == num)
		{
			count++;
			printf("%d ", sum);
		}
	}

	printf("\n %d \n", count);
	return 0;
}