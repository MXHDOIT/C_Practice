#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100
int main()
{
	char arr[SIZE];
	char brr[SIZE];

	scanf_s("%s", arr, sizeof(arr));
	scanf_s("%s", brr, sizeof(brr));

	int len1 = strlen(arr);
	int len2 = strlen(brr);

	int len = (len1 > len2) ? len1 : len2;

	//int* numa = (int*)malloc(sizeof(int) * len1);
	//int* numb = (int*)malloc(sizeof(int) * len2);
	int numa[SIZE] = { 0 };
	int numb[SIZE] = { 0 };
	for (int i = 0; i < len1; i++)
	{
		numa[i] = arr[len1 - 1 - i] - '0';
	}

	for (int i = 0; i < len2; i++)
	{
		numb[i] = brr[len2 - 1 - i] - '0';
	}

	int* num = (int*)malloc(sizeof(int) * len);
	int cf = 0;
	for (int i = 0; i < len; i++)
	{
		num[len - 1 - i] = numa[i] + numb[i] + cf;
		cf = num[len - 1 - i] / 10;
		num[len - 1 - i] %= 10;
	}

	if (cf == 1)
		printf("1");
	for (int i = 0; i < len; i++)
	{
		printf("%d", num[i]);
	}
	return 0;
}