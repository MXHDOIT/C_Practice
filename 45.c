//��������Ϸ
#include<stdio.h>
#include<stdlib.h>

void Meun()
{
	printf("****************\n");
	printf("***1.������Ϸ***\n");
	printf("***0.�˳�   ****\n");
	printf("****************\n");
}

void Game()
{
	int num = rand()%100 + 1;
	int number = 0;
	while (1)
	{
		printf("��������Ҫ�µ�����");
		scanf_s("%d", &number);
		if (number > num)
		{
			printf("�������");
		}
		else if (number < num)
		{
			printf("����С��");
		}
		else
		{
			printf("��ϲ�㣡");
			break;
		}
	}
}

int main()
{
	Meun();
	int n = 0;
	scanf_s("%d", &n);

	switch (n)
	{
	case 1:Game();
		break;
	case 0:break;
	default:break;
	}

	return 0;
}