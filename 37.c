//��������ʮ�����໥ת��
#include<stdio.h>
#include<math.h>
int Exchange1(long long n)
{
	int i = 0;
	int sum = 0;
	while (n > 0)
	{
		sum += ((n % 10)*pow(2, i++));
		n /= 10;
	}

	return sum;
}


long long Exchange2(int n)
{
	long long sum = 0;
	int i = 0;
	while (n > 0)
	{
		sum += (n % 2) * pow(10, i++);
		n /= 2;
	}
	return sum;
}


int main() 
{
	long long num1 = 0;
	int num2 = 0;

	printf("������һ�������Ƶ�����");
	scanf_s("%lld", &num1);

	printf("����������%lldת��Ϊʮ������%d\n",num1,Exchange1(num1) );

	printf("������һ��ʮ���Ƶ�����");
	scanf_s("%d", &num2);

	printf("��ʮ������%dת��Ϊ��������%lld\n", num2, Exchange2(num2));

	return 0;
}

