//输入三个整数x, y, z，请把这三个数由小到大输出

#include<stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	int z = 0;

	scanf_s("%d%d%d", &x, &y, &z);

	if (x > y)
	{
		x = x + y;
		y = x - y;
		x = x - y;
	}
	if (x > z)
	{
		x = x + z;
		z = x - z;
		x = x - z;
	}
	if (y > z)
	{
		y = y + z;
		z = y- z;
		y = y - z;

	}


	printf("%d %d %d\n", x, y, z);
	return 0;
}