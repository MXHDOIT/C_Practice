//�ж�101 - 200֮���ж��ٸ��������������������
#include<stdio.h>
#include<math.h>

int main()
{
	int i = 0;
	int j = 0;
	int count = 0;

	for (i = 101; i <= 200; i += 2)
	{
		//for (j = 2; j < i; j++)
		//{
		//	if (i % j == 0)
		//		break;
		//}

		//if (j == i) //������
		//{
		//	count++;
		//	printf("%d\n", i);
		//}

		/*for (j = 2; j <= i / 2; j++)
		{
			if (i % j == 0)
				break;
		}

		if(j > i/2)
		{
			count++;
			printf("%d\n", i);
		}*/


		for (j = 2; j <= sqrt((double)i); j++)
		{
			if (i % j == 0)
				break;
		}

		if (j > sqrt((double)i))
		{
			count++;
			printf("%d\n", i);
		}

	}

	printf("count = %d\n", count);
	getchar();
	return 0;
}