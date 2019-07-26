// µœ÷strcat

#include<stdio.h>

char* MyStrcat(char*  s1, const char*  s2)
{
	char* temp = s1;

	while (*s1 != '\0')
	{
		s1++;
	}
	while (*s1++ = *s2++);
	return temp;
	
}
int main()
{
	char a[20] = "hello";
	char b[6] = "world";

	printf("%s\n", MyStrcat(a, b));
	return 0;
}