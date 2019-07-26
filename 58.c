//ÊµÏÖstrlen
#include<stdio.h> 

int MyStrlen(const char* p)
{
	if (*p == '\0')
	{
		return 0;
	}
	else
	{
		return MyStrlen(p + 1) + 1;
	}
}
int main()
{
	char* a = "play basketball";
	int count = MyStrlen(a);

	printf("%d\n", count);
	return 0;
}
