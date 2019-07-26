// µœ÷strcpy
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* MyStrcpy(char* q, const char* p)
{
	char* res = q;
	/*while (*p != '\0')
	{
		*res = *p;
		res++;
		p++;
	}
	*res = '\0';*/
	while ((*res++ = *p++) != '\0');
	return q;
}

int main()
{
	char* a = "cool";
	char* b = (char*)malloc(strlen(a) + 1);
	printf("%s\n", MyStrcpy(b, a));
	/*MyStrcpy(a, b);*/
	return 0;
}