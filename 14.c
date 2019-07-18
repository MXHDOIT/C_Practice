//利用条件运算符的嵌套来完成此题：学习成绩 >= 90分的同学用A表示，60 - 89分之间的用B表示，60分以下的用C表示。
#include<stdio.h>
int main()
{
	int grade = 0;
	char rank = '0';

	scanf_s("%d", &grade);

	rank = (grade >= 90) ? 'A' : (grade >= 60) ? 'B' : 'C';

	printf("%c\n", rank);
	return 0;
}