#include<stdio.h>
int main()
{
	char ch = 0;

	printf("请输入第一个字母");
	scanf("%c", &ch);
	
	if(ch=='m')
		printf("%s","monday"); //
	if(ch=='t')
	{ 
		scanf("%c",&ch); 
		scanf("%c",&ch); //
		if(ch=='u')
			printf("%s","tuesday"); //
		else 
		printf("%s","thursday"); //
	}
	if(ch=='w')
		printf("%s","wednesday"); //
	if(ch=='f')
		printf("%s", "friday"); //
	if(ch=='s')
	{ 
		scanf("%c",&ch); 
		scanf("%c",&ch); //
		if(ch=='a')
		printf("%s","satday"); //
		else 
		printf("%s","sunday"); //
	}
	return 0;
}
