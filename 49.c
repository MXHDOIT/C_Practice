//编写一个函数reverse_string(char* string)（递归实现） 实现：将参数字符串中的字符反向排列。 要求：不能使用C函数库中 的字符串操作函数
#include<stdio.h>
#include<stdlib.h>
//void Reverse_string(char* string)
//{
//	if (*string == '\0')
//	{
//		return ;
//	}
//	else
//	{
//		Reverse_string(string+1);
//		printf("%c", *string);
//	}
//}


//
//int main()
//{
////
////	char *str = "abcd";
////
////	/*char* str = (char*)malloc(sizeof(char)* 20);
////	
////	puts(str);*/
////	Reverse_string(str);
//	char arr[1024*1024+99] = {0};
//	printf("dahsd");
//	printf("\n");
//	return 0;
//}
#include<stdio.h>
#include<string.h>
void ReverseString(char* str)
{
	int temp = *str;
	int len = strlen(str);
	*str = *(str+len - 1);
	*(str+len - 1) = '\0';
	if ((strlen(str+1)) >=  2)
	{
		ReverseString(str+1);
	}
	*(str+len-1) = temp;
}
int main()
{
	char a[] = "abcdef";
	ReverseString(a);

	printf("%s\n", a);

	return 0;
}
