//十六进制转十进制
//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//int main()
//{
//	char str[10];
//	int len = 0;
//	int i = 0;
//	int sum = 0;
//	gets(str);
//
//	len = strlen(str);
//
//	for (i = 0; i < len; i++)
//	{
//		if (str[len - 1 - i] >= 'A' && str[len - 1 - i] <= 'F')
//		{
//			sum += (str[len - 1 - i] - 'A' + 10) * pow(16, i);
//		}
//		else if (str[len - 1 - i] >= '0' && str[len - 1 - i] <= '9')
//		{
//
//			sum += (str[len - 1 - i] - '0') * pow(16, i);
//		}
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//十进制转化十六进制
#include<stdio.h>
char str[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };

int main()
{
	int num = 0;
	char arr[10] = { 0 };
	int i = 0;
	int j = 0;
	scanf_s("%d", &num);

	while (num > 0)
	{
		arr[i++] = str[num % 16];
		num /= 16;
	}

	for (j = i; j >= 0; j--)
	{
		printf("%c", arr[j]);
	}
	return 0;
}