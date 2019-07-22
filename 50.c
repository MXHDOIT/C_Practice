//递归和非递归分别实现strlen
#include<stdio.h>

int Sl1(char* string)
{
	if (*string == '\0') {
		return 0;
	}
	else
	{
		return Sl1(string + 1) + 1;
	}
		

}

int Sl2(char* string)
{
	int i = 0;
	for (i = 0; *string == '\0'; i++)
	{
		*string = *(string + 1);
	}
	return i;
}

int main()
{
	char str[] = "I DO IT";
	int length = Sl1(str);//递归
	printf("%d\n", length);
	Sl2(str);//非递归
	printf("%d\n", length);
	return 0;
}