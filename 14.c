//���������������Ƕ������ɴ��⣺ѧϰ�ɼ� >= 90�ֵ�ͬѧ��A��ʾ��60 - 89��֮�����B��ʾ��60�����µ���C��ʾ��
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