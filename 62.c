// µœ÷strchr()
#include<stdio.h>

char* MyStrchr(char* p, char c)
{
	while (*p)
	{
		if (*p == c)
		{
			return p;
		}
		else
		{
			p++;
		}
	}
	return NULL;
}
int main()
{
	char* a = "hello";

	printf("%s\n", MyStrchr(a, 'm'));
	return 0;
}