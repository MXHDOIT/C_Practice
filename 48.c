//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ����磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
#include<stdio.h>

int DigitSum(int n)
{
	if (n < 10)
	{
		return n;
	}
	else
	{
		return DigitSum(n / 10) + (n % 10);
	}
}

int main()
{
	int num = 0;
	scanf_s("%d", &num);

	printf("%d\n", DigitSum(num));
	return 0;
}