//�˽�����ʮ�����໥ת��
#include<stdio.h>
#include<math.h>
int Exchange1(int n)
{
	int sum = 0;
	int i = 0;

	while (n > 0)
	{
		sum += ((n % 10) * pow(8, i++));
		n /= 10;
	}
	return sum;
}

Exchange2(int n)
{
	int sum = 0;
	int i = 0;

	while (n > 0)
	{
		sum += (n % 8) * pow(10, i++);
		n /= 8;
	}
	return sum;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("������һ���˽��Ƶ�����\n");

	scanf_s("%d", &num1);
	printf("���˽��Ƶ�%dת��Ϊʮ���Ƶ� %d:\n", num1, Exchange1(num1));

	printf("������һ��ʮ���Ƶ�����\n");

	scanf_s("%d", &num2);
	printf("��ʮ���Ƶ�%dת��Ϊ�˽��Ƶ� %d:\n", num2, Exchange2(num2));
	return 0;
}