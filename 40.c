
//ʹ�ýṹ�壨struct���洢ѧ����Ϣ��

#include<stdio.h>

typedef struct Stu 
{
	char name[20];
	char  sex[3];
	int   age;
}stu;

int main()
{
	stu s = {"mahang","��",20};

	puts(s.name);
	puts(s.sex);
	printf("%d\n", s.age);


	return 0;
}