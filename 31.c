//一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同
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