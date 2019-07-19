//有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第3个人大2岁。问第三个人，又说比第2人大两岁。问第2个人，说比第一个人大两岁。最后
//问第一个人，他说是10岁。请问第五个人多大？
#include<stdio.h>

int Year(int n)
{
	if (n == 1)
	{
		return 10;
	}
	else
	{
		return 2 + Year(n - 1);
	}
}
int main()
{
	int n = 0;

	scanf_s("%d", &n);


	printf("%d\n", Year(n));
	return 0;
}