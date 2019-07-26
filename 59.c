// µœ÷strcmp
#include<stdio.h>

int MyStrcmp(const char* a,const char* b)
{
	while (*a == *b && *a != '\0')
	{
		a++;
		b++;
	}

	return *a - *b;
}
int main()
{
	char *a = "abc";
	char *b = "abc ";

	printf("%d\n", MyStrcmp(a, b));
	return 0;
}
