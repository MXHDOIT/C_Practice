#include<stdio.h>

int IsLitter()
{
	int a = 0x12345678;
	char* pc = (char*)& a;

	if (*pc == 0x78)
	{
		return 1;
	}
	return 0;
}
int main()
{
	
	if (IsLitter())
	{
		printf("litter");
	}
	else
	{
		printf("big");
	}
	return 0;
}