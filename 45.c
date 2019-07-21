//猜数字游戏
#include<stdio.h>
#include<stdlib.h>

void Meun()
{
	printf("****************\n");
	printf("***1.进行游戏***\n");
	printf("***0.退出   ****\n");
	printf("****************\n");
}

void Game()
{
	int num = rand()%100 + 1;
	int number = 0;
	while (1)
	{
		printf("请输入你要猜的数：");
		scanf_s("%d", &number);
		if (number > num)
		{
			printf("你输大了");
		}
		else if (number < num)
		{
			printf("你输小了");
		}
		else
		{
			printf("恭喜你！");
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