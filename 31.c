//һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ
#include<stdio.h>

void Palindromic(int num)
{
	if ((num % 10 == num / 10000) && (num % 10000 / 1000 == num % 100 / 10))
		printf("is a  Palindromic");
	else
		printf("is not a  Palindromic");
}
int main()
{
	int num = 0;

	scanf_s("%d", &num);
	Palindromic(num);
	return 0;
}