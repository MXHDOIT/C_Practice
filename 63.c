// µœ÷strstr()
#include<stdio.h>

char* MyStrstr(const char* A, const char* B)
{
	char* temp1 = A;
	char* temp2 = B;
	while (*A)
	{
		temp1 = A;
		temp2 = B;
		while(*temp1 == *temp2)
		{
			temp1++;
			temp2++;
			if (*temp2 == '\0')
			{
				return A;
			}

		}
		A++;
	}
	return NULL;
}
int main()
{
	char *a = "youarepig";
	char *b = "are";

	printf("%s\n", MyStrstr(a, b));
	return 0;
}