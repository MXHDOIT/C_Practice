//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
#include<stdio.h>

int Mul(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return n * Mul(n - 1);
	}
}

int Mul2(int n)
{
	int i = 1;
	int sum = 1;
	for (i; i <= n; i++)
	{
		sum *= i;
	}

	return sum;
}
int main()
{
	int n = 0;
	int i = 1;
	int result = 0;
	scanf_s("%d", &n);
	
	
	for(i ; i <= n;i++)
	{
		result += Mul(i);
	 } 

	printf("%d\n",result); //�ݹ�

//	printf("%d\n", Mul2(n));  //�ǵݹ�

	return 0;
}
