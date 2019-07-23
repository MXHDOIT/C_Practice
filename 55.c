//中国古代数学家张丘建在他的《算经》中提出了一个著名的“百钱买百鸡问题”，鸡翁一，值钱五，鸡母一，值钱三，鸡雏三，值钱一，百钱买百鸡，问翁、母、雏各几何？
#include<stdio.h>

int main()
{
	int cock = 0;//代表鸡翁
	int hen = 0; //代表母鸡
	int chick = 0;//代表小鸡

	for (cock = 0; cock <= 20; cock++)
	{
		for (hen = 0; hen <= 33; hen++)
		{
			for (chick = 0; chick < 100; chick = chick + 3)
			{
				if ((5 * cock + 3 * hen + chick / 3 == 100) && (cock + hen + chick == 100))
				{
					printf("公鸡：%d，母鸡：%d，小鸡：%d\n", cock, hen, chick);
				}
			}
		}
	}
	return 0;
}