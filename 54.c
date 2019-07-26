//汉诺塔（递归）
#include<stdio.h>

void Move(int n, char m, char q)
{	
    static int count = 0;
    count++;
	printf("第%d个盘子从%c移到%c,已移%d步\n", n, m, q,count);
}

void Hanoi(int n, char x, char y, char z) //n个圆盘，从 x移到 z上，y为中介
{
	if (n == 1) //如果只有一个盘子直接从 x 移到 z
	{
		Move(1, x, z);
	}
	else
	{
		Hanoi(n - 1, x, z, y);//先把n-1个盘子 从 x 移到 y 上通过 z
		Move(n, x, z);
		Hanoi(n - 1, y, x, z);
	}
}



int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int count = 0;

	Hanoi(n, 'A', 'B', 'C');  //n个圆盘，从 A 移到 C上，B为中介
	return 0;
}
