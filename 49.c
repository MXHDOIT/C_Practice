//编写一个函数reverse_string(char* string)（递归实现） 实现：将参数字符串中的字符反向排列。 要求：不能使用C函数库中 的字符串操作函数
#include<stdio.h>
#include<stdlib.h>
void Reverse_string(char* string)
{
	if (*string == '\0')
	{
		return ;
	}
	else
	{
		Reverse_string(string+1);
		printf("%c", *string);
	}
}

int main()
{

	char *str = "abcd";

	/*char* str = (char*)malloc(sizeof(char)* 20);
	
	puts(str);*/
	Reverse_string(str);
	printf("\n");
	return 0;
}